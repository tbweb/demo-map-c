#include "map.h"

t_map	*ft_new_map(void)
{
	t_map	*map;

	map = (t_map *)malloc(sizeof(t_map));
	if (map)
		map->list = NULL;
	return (map);
}
