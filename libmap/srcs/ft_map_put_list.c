#include "map.h"

void	ft_map_put_list(t_map *map, char *key, t_list *value)
{
	ft_map_put(map, key, value, sizeof(t_list), "t_list *");
}
