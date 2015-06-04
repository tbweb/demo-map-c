# demo-map-c
Petite map en C pour mieux gérer des données clé / valeur dans des listes

Le dossier libmap peut être copié facilement dans votre projet.

Le Makefile de votre projet contenir une règle qui execute cette commande pour compiler la lib : @make -C ./libmap/

Pour ajouter la lib dans votre ligne de compilation, il faut ajouter ce flag : -L./libmap/ -lmap

Le fichier de lib se nomme : libmap.a

Une structure map contient une liste toute simple pour le moment, une 
optimisation sera faite plus tard pour optimiser la rapidité 
de recherche dans la map.

**Voici la structure de notre t_map**
```
typedef struct		s_map
{
	t_list			*list;
}					t_map;
```

##Différentes fonctions existent pour vous faciliter la vie
**Création d'une map :**
* créer une map vide : `t_map	*ft_new_map(void)`

**Ajouter des éléments dans la map :**
* ajouter un string avec une clé associé dans une map : `void	ft_map_put_string(t_map *map, char *key, char *value)`
* ajouter un pointer sur int avec une clé associé dans une map : `void	ft_map_put_pointer_to_int(t_map *map, char *key, int *value)`
* ajouter une map avec une clé associé dans une map : `void	ft_map_put_map(t_map *map, char *key, t_map *value)`
* ajouter une list avec une clé associé dans une map : `void	ft_map_put_list(t_map *map, char *key, t_list *value)`

**Récupération d'un élément**
* récupération de la value d'un élément dans une map en donnant sa clé associé : `void	*ft_map_get(t_map *map, char *key)`
* récupération d'une t_map_data d'un élément dans une map en donnant sa clé associé : `t_map_data	*ft_map_get_map_data(t_map *map, char *key)`

**Un objet t_map_data est composé comme suit**
```
typedef struct		s_map_data
{
	char			*key;
	void			*value;
	size_t			value_size;
	char			*type;
}					t_map_data;
```