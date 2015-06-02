#include "map.h"

void	*ft_map_get(t_map *map, char *key)
{
	t_map_data	*content;

	content = ft_map_get_map_data(map, key);
	if (content != NULL)
	{
		return (content->value);
	}
	return (NULL);
}
