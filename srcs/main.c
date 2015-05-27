#include "unity.h"
#include "map.h"

void	test_map_get_map_data_strings()
{
	t_map *map_strings;
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
	//ft_lstiter(map_strings->list, ft_put_map_data_in_list);
}

void	test_map_get_strings()
{
	t_map *map_strings;
	void	*value;

	map_strings = ft_create_map_strings();
	value = ft_map_get(map_strings, "test50");
	TEST_ASSERT_EQUAL_STRING(value, "content50");
	value = ft_map_get(map_strings, "test99");
	TEST_ASSERT_EQUAL_STRING(value, "content99");
	value = ft_map_get(map_strings, "test0");
	TEST_ASSERT_EQUAL_STRING(value, "content0");
}

void	test_map_put_strings()
{
	t_map_data	*map_data;
	void		*value;
	t_map		*map_strings_for_put;

	map_strings_for_put = ft_new_map();
	ft_map_put(map_strings_for_put, "test100", "content100");
	ft_map_put(map_strings_for_put, "test101", "content101");
	value = ft_map_get(map_strings_for_put, "test100");
	TEST_ASSERT_EQUAL_STRING(value, "content100");
	map_data = ft_map_get_map_data(map_strings_for_put, "test101");
	TEST_ASSERT_EQUAL_STRING(map_data->key, "test101");
	TEST_ASSERT_EQUAL_STRING(map_data->value, "content101");
	TEST_ASSERT_EQUAL_STRING(map_data->type, "char *");
}

void	test_map_put_ints()
{
	t_map_data	*map_data;
	int			*value;
	t_map		*map_ints_for_put;
	int			number1;
	int			number2;

	number1 = 100;
	number2 = 101;
	map_ints_for_put = ft_create_map_ints();
	ft_map_put(map_ints_for_put, "test100", &number1);
	ft_map_put(map_ints_for_put, "test101", &number2);
	value = (int *)ft_map_get(map_ints_for_put, "test50");
	TEST_ASSERT_EQUAL_INT(*value, 50);
	value = (int *)ft_map_get(map_ints_for_put, "test100");
	TEST_ASSERT_EQUAL_INT(*value, 100);
	map_data = ft_map_get_map_data(map_ints_for_put, "test101");
	value = (int *)map_data->value;
	TEST_ASSERT_EQUAL_STRING(map_data->key, "test101");
	TEST_ASSERT_EQUAL_INT(*value, 101);
	TEST_ASSERT_EQUAL_STRING(map_data->type, "char *");
}

int	main(void)
{
	RUN_TEST(test_map_get_map_data_strings, 4);
	RUN_TEST(test_map_get_strings, 25);
	RUN_TEST(test_map_put_strings, 40);
	RUN_TEST(test_map_put_ints, 56);
	return (0);
}