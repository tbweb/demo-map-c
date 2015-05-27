/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_split.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-mint <fle-mint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 15:34:02 by fle-mint          #+#    #+#             */
/*   Updated: 2014/03/27 15:35:02 by fle-mint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

char	*ft_strjoin_split(char **tab, char *str)
{
	int		size;
	int		i;
	char	*tmp;
	char	*tmp2;

	if (tab[0])
	{
		size = ft_tablen(tab);
		i = 0;
		tmp = tab[i];
		while (i < (size - 1))
		{
			tmp2 = ft_strjoin(tmp, str);
			if (i)
				free(tmp);
			tmp = ft_strjoin(tmp2, tab[i + 1]);
			free(tmp2);
			i++;
		}
		if (size == 1)
			tmp = ft_strdup(tmp);
	}
	else
		tmp = ft_strdup("");
	return (tmp);
}
