#include "tests.h"

static void	ft_add_elem_to_map(t_map *map, int i, t_map *maps)
{
	char		*key;
	char		*number;

	number = ft_itoa(i);
	key = ft_strjoin("test", number);
	ft_map_put_map(map, key, maps);
	ft_strdel(&key);
}

t_map		*ft_create_map_maps(void)
{
	int			i;
	t_map		*submap;
	t_map		*map;

	i = 0;
	map = ft_new_map();
	while (i < 2)
	{
		submap = ft_create_map_strings(5);
		if (submap == NULL)
			return (map);
		ft_add_elem_to_map(map, i, submap);
		free(submap);
		i++;
	}
	return (map);
}
