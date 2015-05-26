#include "unity.h"
#include "map.h"

void	test_map_get()
{
	t_map *map_strings;
	t_map_data	*map_data;

	map_strings = ft_create_map_strings();
	map_data = ft_map_get(map_strings, "test50");
	TEST_ASSERT_EQUAL_STRING(map_data->key, "test50");
	TEST_ASSERT_EQUAL_STRING(map_data->value, "content50");
	TEST_ASSERT_EQUAL_STRING(map_data->type, "char *");
	map_data = ft_map_get(map_strings, "test99");
	TEST_ASSERT_EQUAL_STRING(map_data->key, "test99");
	TEST_ASSERT_EQUAL_STRING(map_data->value, "content99");
	TEST_ASSERT_EQUAL_STRING(map_data->type, "char *");
	map_data = ft_map_get(map_strings, "test0");
	TEST_ASSERT_EQUAL_STRING(map_data->key, "test0");
	TEST_ASSERT_EQUAL_STRING(map_data->value, "content0");
	TEST_ASSERT_EQUAL_STRING(map_data->type, "char *");
	//ft_lstiter(map_strings->list, ft_put_map_data_in_list);
}

void	test_map_put()
{
	t_map_data	*map_data;
	t_map		*map_strings_for_put;

	map_strings_for_put = ft_new_map();
	ft_map_put(map_strings_for_put, "test100", "content100");
	ft_map_put(map_strings_for_put, "test101", "content101");
	map_data = ft_map_get(map_strings_for_put, "test100");
	TEST_ASSERT_EQUAL_STRING(map_data->key, "test100");
	TEST_ASSERT_EQUAL_STRING(map_data->value, "content100");
	TEST_ASSERT_EQUAL_STRING(map_data->type, "char *");
	map_data = ft_map_get(map_strings_for_put, "test101");
	TEST_ASSERT_EQUAL_STRING(map_data->key, "test101");
	TEST_ASSERT_EQUAL_STRING(map_data->value, "content101");
	TEST_ASSERT_EQUAL_STRING(map_data->type, "char *");
}

int	main(void)
{
	RUN_TEST(test_map_get, 16);
	RUN_TEST(test_map_put, 39);
	return (0);
}