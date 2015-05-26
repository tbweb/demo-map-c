#include "map.h"

t_list	*ft_create_list_strings(void)
{
	int			i;
	char		*key;
	char		*number;
	char		*content;
	t_map_data	*map_data;
	t_list		*list_string;

	i = 0;
	list_string = NULL;
	while (i < 100)
	{
		number = ft_itoa(i);
		content = ft_strjoin("content", number);
		key = ft_strjoin("test", number);
		ft_strdel(&number);
		map_data = ft_new_map_data(key, content, "char *");
		ft_lstadd(&list_string, ft_lstnew(map_data, 0));
		i++;
	}
	return (list_string);
}