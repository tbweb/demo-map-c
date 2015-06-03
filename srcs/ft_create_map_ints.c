#include "tests.h"

static void	ft_add_elem_to_map(t_map *map, int *nb)
{
	char		*key;
	char		*number;

	number = ft_itoa(*nb);
	key = ft_strjoin("test", number);
	ft_strdel(&number);
	ft_map_put_pointer_to_int(map, key, nb);
	ft_strdel(&key);
}

t_map		*ft_create_map_ints(size_t number_of_ints)
{
	size_t		i;
	int			*nb;
	t_map		*map;

	i = 0;
	map = ft_new_map();
	while (i < number_of_ints)
	{
		nb = (int *)malloc(sizeof(int));
		if (nb == NULL)
			return (map);
		*nb = i;
		ft_add_elem_to_map(map, nb);
		free(nb);
		i++;
	}
	return (map);
}
