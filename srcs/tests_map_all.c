#include "tests.h"

static void	test_map_all_to_json(void)
{
	char	*json;
	t_map	*maps_maps;

	maps_maps = ft_create_map_lists_maps();
	json = ft_map_to_json(maps_maps);
	ft_putendl(json);
	ft_strdel(&json);
	ft_map_del(&maps_maps);
}

void		tests_map_all(void)
{
	RUN_TEST(test_map_all_to_json, 3);
}
