#include "libft.h"

t_list	*ft_lstsearch(t_list **lst, int (*f)(t_list *, void *), void *arg)
{
	t_list *tmp;

	tmp = *lst;
	while (tmp)
	{
		if ((*f)(tmp, arg))
			return (tmp);
		tmp = tmp->next;
	}
	return (0);
}
