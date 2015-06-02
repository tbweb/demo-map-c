#include "tests.h"

static void	test_map_get_map_data_strings(void)
{
	t_map		*map_strings;
	t_map_data	*map_data;

	map_strings = ft_create_map_strings();
	map_data = ft_map_get_map_data(map_strings, "test50");
	TEST_ASSERT_EQUAL_STRING(map_data->key, "test50");
	TEST_ASSERT_EQUAL_STRING(map_data->value, "content50");
	TEST_ASSERT_EQUAL_STRING(map_data->type, "char *");
	map_data = ft_map_get_map_data(map_strings, "test99");
	TEST_ASSERT_EQUAL_STRING(map_data->key, "test99");
	TEST_ASSERT_EQUAL_STRING(map_data->value, "content99");
	TEST_ASSERT_EQUAL_STRING(map_data->type, "char *");
	map_data = ft_map_get_map_data(map_strings, "test0");
	TEST_ASSERT_EQUAL_STRING(map_data->key, "test0");
	TEST_ASSERT_EQUAL_STRING(map_data->value, "content0");
	TEST_ASSERT_EQUAL_STRING(map_data->type, "char *");
	ft_map_del(&map_strings);
}

static void	test_map_get_strings(void)
{
	t_map	*map_strings;
	void	*value;

	map_strings = ft_create_map_strings();
	value = ft_map_get(map_strings, "test50");
	TEST_ASSERT_EQUAL_STRING(value, "content50");
	value = ft_map_get(map_strings, "test99");
	TEST_ASSERT_EQUAL_STRING(value, "content99");
	value = ft_map_get(map_strings, "test0");
	TEST_ASSERT_EQUAL_STRING(value, "content0");
	ft_map_del(&map_strings);
}

static void	test_map_put_strings(void)
{
	t_map_data	*map_data;
	void		*value;
	t_map		*map_strings_for_put;

	map_strings_for_put = ft_new_map();
	ft_map_put(map_strings_for_put, "test100", "content100", 11, "char *");
	ft_map_put(map_strings_for_put, "test101", "content101", 11, "char *");
	value = ft_map_get(map_strings_for_put, "test100");
	TEST_ASSERT_EQUAL_STRING(value, "content100");
	map_data = ft_map_get_map_data(map_strings_for_put, "test101");
	TEST_ASSERT_EQUAL_STRING(map_data->key, "test101");
	TEST_ASSERT_EQUAL_STRING(map_data->value, "content101");
	TEST_ASSERT_EQUAL_STRING(map_data->type, "char *");
	ft_map_del(&map_strings_for_put);
}

static void	test_map_strings_to_json(void)
{
	char	*json;
	t_map	*map_strings;

	map_strings = ft_create_map_strings();
	json = ft_map_to_json(map_strings);
	ft_putendl(json);
	ft_strdel(&json);
	ft_map_del(&map_strings);
}

void		tests_strings(void)
{
	RUN_TEST(test_map_get_map_data_strings, 5);
	RUN_TEST(test_map_get_strings, 27);
	RUN_TEST(test_map_put_strings, 42);
	RUN_TEST(test_map_strings_to_json, 60);
}
