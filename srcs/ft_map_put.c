#include "map.h"

void	ft_map_put(t_map *map, char *key, void *value, char *type)
{
	t_map_data	*map_data;

	map_data = ft_new_map_data(ft_strdup(key), ft_strdup(value), type);
	ft_lstadd(&map->list, ft_lstnew(map_data, 0));
}