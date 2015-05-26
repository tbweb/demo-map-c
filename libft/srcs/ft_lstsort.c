#include "libft.h"

static void	swap_elem(t_list *elem1, t_list *elem2)
{
	void	*tmp;
	int		tmpcontent_size;

	if (elem1 && elem2)
	{
		tmp = elem1->content;
		tmpcontent_size = elem1->content_size;
		elem1->content = elem2->content;
		elem1->content_size = elem2->content_size;
		elem2->content = tmp;
		elem2->content_size = tmpcontent_size;
	}
}

void	ft_lstsort(t_list **lst, int (*f)(t_list *, t_list *))
{
	int		sort;
	t_list	*tmp;

	sort = 0;
	while (!sort)
	{
		sort = 1;
		tmp = *lst;
		while (tmp && tmp->next)
		{
			if ((*f)(tmp, tmp->next))
			{
				swap_elem(tmp, tmp->next);
				sort = 0;
			}
			tmp = tmp->next;
		}
	}
}
