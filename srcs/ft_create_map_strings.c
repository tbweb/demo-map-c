#include "tests.h"

static void	ft_add_elem_to_map(t_map *map, int i)
{
	char		*key;
	char		*number;
	char		*content;
	t_map_data	*map_data;

	number = ft_itoa(i);
	content = ft_strjoin("content", number);
	key = ft_strjoin("test", number);
	map_data = ft_new_map_data(key, content, ft_strlen(content) + 1, "char *");
	ft_lstadd(&map->list, ft_lstnew(map_data, 0));
	ft_strdel(&content);
	ft_strdel(&number);
	ft_strdel(&key);
}

t_map		*ft_create_map_strings(void)
{
	int			i;
	t_map		*map;

	i = 0;
	map = ft_new_map();
	while (i < 5)
	{
		ft_add_elem_to_map(map, i);
		i++;
	}
	return (map);
}
