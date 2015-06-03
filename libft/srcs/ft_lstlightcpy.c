/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlightcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taudeguy <taudeguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/02 22:42:19 by taudeguy          #+#    #+#             */
/*   Updated: 2015/06/02 22:42:57 by taudeguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstlightcpy(t_list **lst, t_list **out)
{
	t_list	*tmp;
	t_list	*elem;

	tmp = *lst;
	while (tmp)
	{
		elem = ft_lstnew(tmp->content, 0);
		ft_lstadd(out, elem);
		tmp = tmp->next;
	}
}
