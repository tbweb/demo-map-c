#include "map.h"

int	ft_map_put_pointer_to_int(t_map *map, char *key, int *value)
{
	return (ft_map_put(map, key, value, sizeof(int), "int *"));
}
