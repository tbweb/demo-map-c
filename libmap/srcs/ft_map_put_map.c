#include "map.h"

void	ft_map_put_map(t_map *map, char *key, t_map *value)
{
	ft_map_put(map, key, value, sizeof(t_map), "t_map *");
}
