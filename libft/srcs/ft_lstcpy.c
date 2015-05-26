#include "libft.h"

void	ft_lstcpy(t_list **lst, t_list **out)
{
	t_list	*tmp;
	t_list	*elem;

	tmp = *lst;
	while (tmp)
	{
		elem = ft_lstnew(tmp->content, tmp->content_size);
		ft_lstadd(out, elem);
		tmp = tmp->next;
	}
}
