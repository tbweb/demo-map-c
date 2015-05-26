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

	map_data = ft_map_get(list_string, "test50");
	TEST_ASSERT_EQUAL_STRING(map_data->key, "test50");
	TEST_ASSERT_EQUAL_STRING(map_data->value, "content50");
	TEST_ASSERT_EQUAL_STRING(map_data->type, "char *");
	map_data = ft_map_get(list_string, "test99");
	TEST_ASSERT_EQUAL_STRING(map_data->key, "test99");
	TEST_ASSERT_EQUAL_STRING(map_data->value, "content99");
	TEST_ASSERT_EQUAL_STRING(map_data->type, "char *");
	map_data = ft_map_get(list_string, "test0");
	TEST_ASSERT_EQUAL_STRING(map_data->key, "test0");
	TEST_ASSERT_EQUAL_STRING(map_data->value, "content0");
	TEST_ASSERT_EQUAL_STRING(map_data->type, "char *");
}

void	test_map_put()
{
	t_map_data	*map_data;
	t_list		*list_string_for_put;

	list_string_for_put = NULL;
	ft_map_put(&list_string_for_put, "test100", "content100");
	ft_map_put(&list_string_for_put, "test101", "content101");
	map_data = ft_map_get(list_string_for_put, "test100");
	TEST_ASSERT_EQUAL_STRING(map_data->key, "test100");
	TEST_ASSERT_EQUAL_STRING(map_data->value, "content100");
	TEST_ASSERT_EQUAL_STRING(map_data->type, "char *");
	map_data = ft_map_get(list_string_for_put, "test101");
	TEST_ASSERT_EQUAL_STRING(map_data->key, "test101");
	TEST_ASSERT_EQUAL_STRING(map_data->value, "content101");
	TEST_ASSERT_EQUAL_STRING(map_data->type, "char *");
}

int	main(void)
{
	setUp();
	RUN_TEST(test_map_get, 16);
	RUN_TEST(test_map_put, 39);
	return (0);
}