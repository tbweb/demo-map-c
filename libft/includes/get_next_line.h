/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fle-mint <fle-mint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/03 14:22:40 by fle-mint          #+#    #+#             */
/*   Updated: 2014/03/27 09:28:45 by fle-mint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>

typedef struct		s_line
{
	int				fd;
	ssize_t			ret;
	ssize_t			len;
	ssize_t			len_stor;
	char			*stor;
	struct s_line	*next;
}					t_line;

int					ft_get_next_line(int const fd, char **line);
int					ft_free_t_line(int fd, t_line *suppr, t_line **begin_line);

#endif
