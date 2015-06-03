#include "tests.h"

static void	ft_add_elem_to_map(t_map *map, int i)
{
	char		*key;
	char		*number;
	char		*content;

	number = ft_itoa(i);
	content = ft_strjoin("content", number);
	key = ft_strjoin("test", number);
	ft_map_put_string(map, key, content);
	ft_strdel(&content);
	ft_strdel(&number);
	ft_strdel(&key);
}

t_map		*ft_create_map_strings(size_t number_of_string)
{
	size_t		i;
	t_map		*map;

	i = 0;
	map = ft_new_map();
	while (i < number_of_string)
	{
		ft_add_elem_to_map(map, i);
		i++;
	}
	return (map);
}
