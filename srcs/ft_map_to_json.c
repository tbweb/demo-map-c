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

	value = "null";
	key = ft_create_key_string(map_data->key);
	tmp = ft_strjoin(key, ":");
	if (ft_strequ(map_data->type, "char *"))
		value = ft_create_key_string(map_data->value);
	else if (ft_strequ(map_data->type, "int *"))
		value = ft_itoa(*((int *)map_data->value));
	else if (ft_strequ(map_data->type, "t_map *"))
		value = ft_map_to_json((t_map *)map_data->value);
	else if (ft_strequ(map_data->type, "t_list *"))
		value = ft_list_of_map_to_json((t_list *)map_data->value);
	data = ft_strjoin(tmp, value);
	ft_strdel(&value);
	ft_strdel(&key);
	ft_strdel(&tmp);
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

char		*ft_map_to_json(t_map *map)
{
	char	*json;

	json = ft_create_object_json(map->list);
	return (json);
}
