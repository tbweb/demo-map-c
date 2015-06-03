#include "json.h"

static char	*ft_create_object_with_jsonstr(char *json)
{
	char	**tab;

	tab = ft_tabnew(3);
	tab[0] = ft_strdup("[");
	tab[1] = json;
	tab[2] = ft_strdup("]");
	json = ft_strjoin_split(tab, "");
	ft_tabdel(tab);
	return (json);
}

char		*ft_list_of_map_to_json(t_list *list_of_map)
{
	char	*ret;
	char	*json;
	char	**tab;

	json = NULL;
	while (list_of_map)
	{
		ret = ft_map_to_json((t_map *)list_of_map->content);
		if (json != NULL)
		{
			tab = ft_tabnew(2);
			tab[0] = json;
			tab[1] = ret;
			json = ft_strjoin_split(tab, ",");
			ft_tabdel(tab);
		}
		else
			json = ret;
		list_of_map = list_of_map->next;
	}
	return (ft_create_object_with_jsonstr(json));
}
