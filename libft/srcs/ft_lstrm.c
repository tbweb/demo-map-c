/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taudeguy <taudeguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/02 22:43:28 by taudeguy          #+#    #+#             */
/*   Updated: 2015/06/02 22:43:45 by taudeguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

static void		delete_element(t_list **elem, void *arg)
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

void			ft_lstrm(t_list **lst)
{
	ft_lstiterarg(lst, &delete_element, 0);
	*lst = 0;
}
