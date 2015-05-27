#include "map.h"

t_map_data	*ft_new_map_data(char *key, void *value, char *type)
{
	t_map_data	*map_data;

	map_data = (t_map_data *)malloc(sizeof(t_map_data));
	if (map_data == NULL)
		return map_data;
	map_data->key = ft_strdup(key);
	map_data->value = value;
	map_data->type = ft_strdup(type);
	return (map_data);
}