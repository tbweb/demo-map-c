#include "map.h"

static t_map_data	*fill_value_in_map_data(t_map_data *map_data,
	void *value, size_t value_size)
{
	if (value_size > 0 && value != NULL)
	{
		map_data->value = (void *)malloc(value_size);
		if (!map_data->value)
			return (NULL);
		ft_memcpy(map_data->value, value, value_size);
		map_data->value_size = 0;
	}
	else
	{
		map_data->value = NULL;
		map_data->value_size = 0;
	}
	return (map_data);
}

t_map_data			*ft_new_map_data(char *key, void *value, size_t value_size,
	char *type)
{
	t_map_data	*map_data;

	map_data = (t_map_data *)malloc(sizeof(t_map_data));
	if (map_data)
	{
		map_data->key = ft_strdup(key);
		map_data->type = ft_strdup(type);
		if (map_data->key == NULL || map_data->type == NULL)
		{
			return (NULL);
		}
		return (fill_value_in_map_data(map_data, value, value_size));
	}
	return (map_data);
}
