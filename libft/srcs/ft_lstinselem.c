#include "libft.h"

void	ft_lstinselem(t_list *lst, t_list *elem)
{
	if (lst && elem)
	{
		elem->next = lst->next;
		lst->next = elem;
	}
}
