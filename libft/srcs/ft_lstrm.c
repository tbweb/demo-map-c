#include "libft.h"
#include "stdlib.h"

static void	delete_element(t_list **elem, void *arg)
{
	(void)arg;
	if (*elem)
	{
		if ((*elem)->content && (*elem)->content_size)
			free((*elem)->content);
		free(*elem);
		*elem = 0;
	}
}

void	ft_lstrm(t_list **lst)
{
	ft_lstiterarg(lst, &delete_element, 0);
	*lst = 0;
}
