#include "tests.h"

static void	test_map_put_ints(void)
{
	t_map_data	*map_data;
	int			*value;
	t_map		*map_ints_for_put;
	int			number1;
	int			number2;

	number1 = 100;
	number2 = 101;
	map_ints_for_put = ft_create_map_ints();
	ft_map_put(map_ints_for_put, "test100", &number1, sizeof(int), "int *");
	ft_map_put(map_ints_for_put, "test101", &number2, sizeof(int), "int *");
	value = (int *)ft_map_get(map_ints_for_put, "test50");
	TEST_ASSERT_EQUAL_INT(*value, 50);
	value = (int *)ft_map_get(map_ints_for_put, "test100");
	TEST_ASSERT_EQUAL_INT(*value, 100);
	map_data = ft_map_get_map_data(map_ints_for_put, "test101");
	value = (int *)map_data->value;
	TEST_ASSERT_EQUAL_STRING(map_data->key, "test101");
	TEST_ASSERT_EQUAL_INT(*value, 101);
	TEST_ASSERT_EQUAL_STRING(map_data->type, "int *");
	ft_map_del(&map_ints_for_put);
}

static void	test_map_ints_to_json(void)
{
	char	*json;
	t_map	*maps_ints;
	
	maps_ints = ft_create_map_ints();
	json = ft_map_to_json(maps_ints);
	ft_putendl(json);
	ft_strdel(&json);
	ft_map_del(&maps_ints);
}

void	tests_ints(void)
{
	RUN_TEST(test_map_put_ints, 60);
	RUN_TEST(test_map_ints_to_json, 97);
}