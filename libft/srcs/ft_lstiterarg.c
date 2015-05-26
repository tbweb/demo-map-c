#include "libft.h"

void	ft_lstiterarg(t_list **lst, void (*f)(t_list **, void *), void *arg)
{
	t_list	*tmp;
	t_list	*tmp_next;
	t_list	*tmp_prev;

	tmp_prev = 0;
	tmp = *lst;
	while (tmp)
	{
		tmp_next = tmp->next;
		f(&tmp, arg);
		if (!tmp && tmp_prev)
			tmp_prev->next = tmp_next;
		else if (!tmp)
			*lst = tmp_next;
		else
			tmp_prev = tmp;
		tmp = tmp_next;
	}
}
