#include "map.h"

int	ft_map_put_string(t_map *map, char *key, char *value)
{
	return (ft_map_put(map, key, value, ft_strlen(value) + 1, "char *"));
}
