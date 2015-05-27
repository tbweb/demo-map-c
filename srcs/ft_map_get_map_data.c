#include "map.h"

t_map_data	*ft_map_get_map_data(t_map *map, char *key)
{
	t_list	*elem;

	elem = ft_lstsearch(&map->list, ft_match_key_in_node_of_list, key);
	if (elem != NULL)
	{
		return (elem->content);
	}
	return NULL;
}