#include "map.h"

void	ft_del_map_data(void *map_data, size_t content_size)
{
	t_map_data	*map_data_del;

	(void)content_size;
	map_data_del = (t_map_data *)map_data;
	if (ft_strequ(map_data_del->type, "t_map *"))
		ft_map_del((t_map **)&map_data_del->value);
	else
		free(map_data_del->value);
	ft_strdel(&map_data_del->key);
	ft_strdel(&map_data_del->type);
	free(map_data);
}
