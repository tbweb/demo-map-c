/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taudeguy <taudeguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/02 22:40:34 by taudeguy          #+#    #+#             */
/*   Updated: 2015/06/02 22:40:39 by taudeguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
