#include "tests.h"

static void	ft_add_elem_to_map(t_map *map, int *nb)
{
	char		*key;
	char		*number;
	t_map_data	*map_data;

	number = ft_itoa(*nb);
	key = ft_strjoin("test", number);
	ft_strdel(&number);
	map_data = ft_new_map_data(key, nb, sizeof(int), "int *");
	ft_lstadd(&map->list, ft_lstnew(map_data, 0));
	ft_strdel(&key);
}

t_map		*ft_create_map_ints(void)
{
	int			i;
	int			*nb;
	t_map		*map;

	i = 0;
	map = ft_new_map();
	while (i < 100)
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
