#include "tests.h"

static void	ft_add_elem_to_map(t_map *map, int i, t_list *list)
{
	char		*key;
	char		*number;

	number = ft_itoa(i);
	key = ft_strjoin("test", number);
	ft_map_put_list(map, key, list);
	ft_strdel(&number);
	ft_strdel(&key);
	free(list);
}

t_map		*ft_create_map_lists_maps(void)
{
	int			i;
	t_map		*map;
	t_list		*list;

	i = 0;
	map = ft_new_map();
	while (i < 4)
	{
		list = ft_create_list_maps();
		ft_add_elem_to_map(map, i, list);
		i++;
	}
	return (map);
}
