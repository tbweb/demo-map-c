#include "map.h"

t_map	*ft_create_map_strings(void)
{
	int			i;
	char		*key;
	char		*number;
	char		*content;
	t_map		*map;
	t_map_data	*map_data;

	i = 0;
	map = ft_new_map();
	while (i < 100)
	{
		number = ft_itoa(i);
		content = ft_strjoin("content", number);
		key = ft_strjoin("test", number);
		ft_strdel(&number);
		map_data = ft_new_map_data(key, content, "char *");
		ft_lstadd(&map->list, ft_lstnew(map_data, 0));
		i++;
	}
	return (map);
}