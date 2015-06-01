#include <unistd.h>
#include "json.h"

static char	*ft_create_key_string(char *key)
{
	char	*str;
	char	**tab;

	tab = ft_tabnew(3);
	tab[0] = ft_strdup("\"");
	tab[1] = ft_strdup(key);
	tab[2] = ft_strdup("\"");
	str = ft_strjoin_split(tab, "");
	ft_tabdel(tab);
	return (str);
}

static char	*ft_create_key_value_json(t_map_data *map_data)
{
	char	*tmp;
	char	*key;
	char	*data;
	char	*value;

	tmp = NULL;
	data = NULL;
	if (ft_strequ(map_data->type, "char *"))
	{
		key = ft_create_key_string(map_data->key);
		tmp = ft_strjoin(key, ":");
		value = ft_create_key_string(map_data->value);
		data = ft_strjoin(tmp, value);
		ft_strdel(&key);
		ft_strdel(&tmp);
		ft_strdel(&value);
	}
	// else if (ft_strequ(map_data->type, "int *"))
	// {
	// 	tmp = ft_strjoin(map_data->key, ":");
	// 	data = ft_strjoin(tmp, map_data->value);
	// }
	return (data);
}

static char	*ft_create_object_with_jsonstr(char *json)
{
	char	*str;
	char	**tab;

	tab = ft_tabnew(3);
	tab[0] = ft_strdup("{");
	tab[1] = ft_strdup(json);
	tab[2] = ft_strdup("}");
	str = ft_strjoin_split(tab, "");
	ft_tabdel(tab);
	return (str);
}

static char	*ft_create_object_json(t_list *data)
{
	char	*str;
	char	*tmp;
	char	*json;

	str = NULL;
	json = NULL;
	while (data)
	{
		tmp = ft_create_key_value_json(data->content);
		if (data->next != NULL)
			str = ft_strjoin(tmp, ",");
		else
			str = ft_strdup(tmp);
		ft_strdel(&tmp);
		tmp = json;
		json = ft_strjoin(json, str);
		ft_strdel(&tmp);
		ft_strdel(&str);
		data = data->next;
	}
	str = ft_create_object_with_jsonstr(json);
	ft_strdel(&json);
	return (str);
}

char	*ft_map_to_json(t_map *map)
{
	char	*json;
	t_list	*data;

	data = map->list;
	json = ft_create_object_json(data);
	return (json);
}