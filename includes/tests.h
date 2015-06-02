#ifndef TESTS_H
# define TESTS_H

# include <unistd.h>
# include <stdlib.h>
# include "../libft/includes/libft.h"

#include "unity.h"
#include "map.h"
#include "json.h"

void	tests_strings(void);
void	tests_ints(void);
void	tests_maps(void);
void	tests_lists_maps(void);

t_map		*ft_create_map_strings(void);
t_map		*ft_create_map_ints(void);
t_map		*ft_create_map_maps(void);
t_map		*ft_create_map_lists_maps(void);
t_list		*ft_create_list_maps(void);
t_list		*ft_create_list_strings(void);

#endif