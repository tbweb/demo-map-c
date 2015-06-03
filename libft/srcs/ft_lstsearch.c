/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsearch.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taudeguy <taudeguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/02 22:44:15 by taudeguy          #+#    #+#             */
/*   Updated: 2015/06/02 22:44:23 by taudeguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
