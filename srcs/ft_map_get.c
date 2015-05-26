#include "map.h"

t_map_data	*ft_map_get(t_list *map, char *key)
{
	t_list	*elem;

	elem = ft_lstsearch(&map, ft_match_key_in_list, key);
	if (elem != NULL)
	{
		return (elem->content);
	}
	return NULL;
}