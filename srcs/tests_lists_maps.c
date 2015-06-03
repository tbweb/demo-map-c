#include "tests.h"

static void	test_map_put_lists_maps(void)
{
	t_map		*map_lists_for_put;

	map_lists_for_put = ft_create_map_lists_maps();
	ft_map_del(&map_lists_for_put);
}

static void	test_map_lists_maps_to_json(void)
{
	char	*json;
	t_map	*maps_maps;

	maps_maps = ft_create_map_lists_maps();
	json = ft_map_to_json(maps_maps);
	ft_putendl(json);
	ft_strdel(&json);
	ft_map_del(&maps_maps);
}

void		tests_lists_maps(void)
{
	RUN_TEST(test_map_put_lists_maps, 3);
	RUN_TEST(test_map_lists_maps_to_json, 11);
}
