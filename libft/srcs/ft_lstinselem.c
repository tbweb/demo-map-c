/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstinselem.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taudeguy <taudeguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/02 22:41:40 by taudeguy          #+#    #+#             */
/*   Updated: 2015/06/02 22:41:44 by taudeguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstinselem(t_list *lst, t_list *elem)
{
	if (lst && elem)
	{
		elem->next = lst->next;
		lst->next = elem;
	}
}
