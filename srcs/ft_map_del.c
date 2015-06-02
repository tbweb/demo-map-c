#include "map.h"

void	ft_map_del(t_map **map)
{
	if (*map != NULL)
	{
		ft_lstdel(&(*map)->list, ft_del_map_data);
		free(*map);
	}
	*map = NULL;
}
