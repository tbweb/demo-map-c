#include "map.h"

void	ft_map_put(t_map *map, char *key, void *value, size_t value_size, char *type)
{
	t_map_data	*map_data;

	map_data = ft_new_map_data(key, value, value_size, type);
	ft_lstadd(&map->list, ft_lstnew(map_data, 0));
}