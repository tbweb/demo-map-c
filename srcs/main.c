#include "map.h"

static t_list *list_string;

void setUp() {
	list_string = ft_create_list_strings();
}

int	test_show_elements()
{
	ft_lstiter(list_string, ft_put_map_data_in_list);
	return (1);
}

int	test_map_get()
{
	t_map_data	*map_data;

	ft_putendl("GET IN MAP TESTS");
	map_data = ft_map_get(list_string, "test3");
	ft_put_map_data(map_data);
	map_data = ft_map_get(list_string, "test50");
	ft_put_map_data(map_data);
	map_data = ft_map_get(list_string, "test99");
	ft_put_map_data(map_data);
	map_data = ft_map_get(list_string, "test0");
	ft_put_map_data(map_data);
	return (1);
}

int	main(void)
{
	setUp();
	test_show_elements();
	test_map_get();
	return (0);
}