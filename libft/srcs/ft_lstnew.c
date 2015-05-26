/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btournoi <btournoi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 13:29:00 by btournoi          #+#    #+#             */
/*   Updated: 2014/03/26 19:53:28 by ggozlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content, size_t content_size)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (list != NULL)
	{
		if (content && content_size)
		{
			list->content = (void *)malloc(sizeof(void *) * content_size);
			if (!list->content)
				return (NULL);
			ft_memcpy(list->content, content, content_size);
		}
		else
		{
			list->content = content;
			content_size = 0;
		}
		list->content_size = content_size;
		list->next = NULL;
	}
	return (list);
}
