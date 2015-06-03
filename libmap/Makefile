# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btournoi <btournoi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/02 13:17:01 by btournoi          #+#    #+#              #
#    Updated: 2015/05/22 21:44:33 by taudeguy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			=	gcc

NAME		=	libmap.a

INCLUDES	=	-I./includes/

CFLAGS		=	-Wall -Wextra -Werror -g $(INCLUDES)

SRCDIR		=	./srcs/

OBJDIR		=	./objs/

SRC			=	ft_new_map.c \
                ft_map_del.c \
                ft_new_map_data.c \
                ft_del_map_data.c \
                ft_put_map_data.c \
                ft_map_get_map_data.c \
                ft_put_map_data_in_list.c \
                ft_match_key_in_node_of_list.c \
                ft_map_get.c \
                ft_map_put.c \
                ft_map_put_map.c \
                ft_map_put_list.c \
                ft_map_put_string.c \
                ft_map_put_pointer_on_int.c

OBJS = $(patsubst %.c,$(OBJDIR)%.o,$(SRC))

$(OBJDIR)%.o: $(SRCDIR)%.c
	@mkdir -p ./objs
	@$(CC) $(CFLAGS) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "Libmap created"

clean:
	@/bin/rm -f $(OBJS)
	@echo ".o file Libmap delete"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "Binary Libmap delete"


re: fclean all

.PHONY: clean fclean re all
