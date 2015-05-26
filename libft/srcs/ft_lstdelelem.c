#include "libft.h"
#include "stdlib.h"

void	ft_lstdelelem(t_list **lst, t_list *elem)
{
	t_list	*tmp;
	t_list	*tmp_prev;

	tmp = *lst;
	tmp_prev = 0;
	if (elem && tmp)
	{
		while (tmp->next && elem != tmp)
		{
			tmp_prev = tmp;
			tmp = tmp->next;
		}
		if (elem == tmp)
		{
			if (tmp_prev)
				tmp_prev->next = tmp->next;
			else if (!tmp_prev)
				*lst = tmp->next;
			if (tmp->content && tmp->content_size)
				free(tmp->content);
			free(elem);
		}
	}
}


