#include "tests.h"

t_list		*ft_create_list_maps(void)
{
	int		i;
	t_map	*map;
	t_list	*list;

	i = 0;
	list = NULL;
	while (i < 4)
	{
		map = ft_create_map_strings(4);
		ft_lstadd(&list, ft_lstnew(map, sizeof(t_map)));
		free(map);
		i++;
	}
	return (list);
}
