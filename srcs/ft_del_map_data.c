#include "map.h"

void	ft_del_map_data(void *map_data, size_t content_size)
{
	t_map_data	*map_data_del;

	(void)content_size;
	map_data_del = (t_map_data *)map_data;
	free(map_data_del->value);
	ft_strdel(&map_data_del->key);
	ft_strdel(&map_data_del->type);
	free(map_data);
}