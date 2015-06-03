#include "map.h"

int	ft_match_key_in_node_of_list(t_list *elem, void *arg)
{
	t_map_data	*map_data;

	map_data = (t_map_data *)elem->content;
	if (ft_strequ(map_data->key, (char *)arg))
	{
		return (1);
	}
	return (0);
}
