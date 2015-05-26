#include "unity.h"
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

void	test_map_get()
{
	t_map_data	*map_data;

	ft_putendl("GET IN MAP TESTS");
	map_data = ft_map_get(list_string, "test3");
	TEST_ASSERT_EQUAL_STRING(map_data->value, "content4");
	map_data = ft_map_get(list_string, "test50");
	TEST_ASSERT_EQUAL_STRING(map_data->value, "content50");
	map_data = ft_map_get(list_string, "test99");
	TEST_ASSERT_EQUAL_STRING(map_data->value, "content99");
	map_data = ft_map_get(list_string, "test0");
	TEST_ASSERT_EQUAL_STRING(map_data->value, "content0");
}

int	main(void)
{
	setUp();
	RUN_TEST(test_map_get, 13);
	return (0);
}