#include "map.h"

int	ft_map_put(t_map *map, char *key, void *value, size_t value_size,
	char *type)
{
	t_map_data	*map_data;

	map_data = ft_new_map_data(key, value, value_size, type);
	if (map_data == NULL)
		return (0);
	ft_lstadd(&map->list, ft_lstnew(map_data, 0));
	return (1);
}
