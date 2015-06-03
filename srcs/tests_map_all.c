#include "tests.h"

static void	test_map_all_to_json(void)
{
	char	*json;
	t_map	*map;
	int		nb;

	nb = 14;
	map = ft_new_map();
	ft_map_put_string(map, "string", "J'aime ma vie");
	ft_map_put_pointer_to_int(map, "int", &nb);
	ft_map_put_map(map, "map", ft_create_map_maps());
	ft_map_put_list(map, "list", ft_create_list_maps());
	json = ft_map_to_json(map);
	ft_putendl(json);
	ft_strdel(&json);
	ft_map_del(&map);
}

void		tests_map_all(void)
{
	RUN_TEST(test_map_all_to_json, 3);
}
