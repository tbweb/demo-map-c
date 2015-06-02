#include "tests.h"

static void	test_map_put_maps(void)
{
	t_map		*map_maps_for_put;

	map_maps_for_put = ft_create_map_maps();
	ft_map_del(&map_maps_for_put);
}

static void	test_map_maps_to_json(void)
{
	char	*json;
	t_map	*maps_maps;

	maps_maps = ft_create_map_maps();
	json = ft_map_to_json(maps_maps);
	ft_putendl(json);
	ft_strdel(&json);
	ft_map_del(&maps_maps);
}

void		tests_maps(void)
{
	RUN_TEST(test_map_put_maps, 60);
	RUN_TEST(test_map_maps_to_json, 97);
}
