#include "tests.h"

t_list		*ft_create_list_strings(void)
{
	int		i;
	char	*str;
	t_list	*list;

	i = 0;
	list = NULL;
	while (i < 4)
	{
		str = ft_strdup("titi");
		ft_lstadd(&list, ft_lstnew(str, ft_strlen(str)));
		ft_strdel(&str);
	}
	return (list);
}