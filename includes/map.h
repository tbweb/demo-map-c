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

t_map_data	*ft_new_map_data(char *key, void *value, char *type);
void		ft_put_map_data(t_map_data *map_data);
void		ft_put_map_data_in_list(t_list *elem);
int			ft_match_key_in_list(t_list *elem, void *arg);
t_map_data	*ft_map_get(t_list *map, char *key);

/*TEST*/
t_list		*ft_create_list_strings(void);

#endif