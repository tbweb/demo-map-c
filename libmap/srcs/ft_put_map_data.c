#include "map.h"

void	ft_put_map_data(t_map_data *map_data)
{
	ft_putstr("Key: ");
	ft_putstr(map_data->key);
	ft_putstr(", Type: ");
	ft_putstr(map_data->type);
	ft_putstr(", Value: ");
	if (ft_strequ(map_data->type, "char *"))
		ft_putendl((char *)map_data->value);
	else if (ft_strequ(map_data->type, "int *"))
	{
		ft_putnbr(*((int *)map_data->value));
		ft_putchar('\n');
	}
}
