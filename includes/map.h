#ifndef MAP_H
# define MAP_H

# include <stdlib.h>
# include "../libft/includes/libft.h"

typedef struct		s_map_data
{
	char			*key;
	void			*value;
	char			*type;
}					t_map_data;

typedef struct		s_map
{
	t_list			*list;
}					t_map;

t_map		*ft_new_map(void);
t_map_data	*ft_new_map_data(char *key, void *value, char *type);
void		ft_put_map_data(t_map_data *map_data);
void		ft_put_map_data_in_list(t_list *elem);
int			ft_match_key_in_node_of_list(t_list *elem, void *arg);
t_map_data	*ft_map_get_map_data(t_map *map, char *key);
void		*ft_map_get(t_map *map, char *key);
void		ft_map_put(t_map *map, char *key, void *value, char *type);

/*TEST*/
t_map		*ft_create_map_strings(void);
t_map		*ft_create_map_ints(void);

#endif