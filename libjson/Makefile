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

NAME		=	libjson.a

INCLUDES	=	-I./includes/

CFLAGS		=	-Wall -Wextra -Werror -g $(INCLUDES)

SRCDIR		=	./srcs/

OBJDIR		=	./objs/

SRC			=	ft_map_to_json.c \
                ft_list_of_map_to_json.c

OBJS = $(patsubst %.c,$(OBJDIR)%.o,$(SRC))

$(OBJDIR)%.o: $(SRCDIR)%.c
	@mkdir -p ./objs
	@$(CC) $(CFLAGS) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "Libjson created"

clean:
	@/bin/rm -f $(OBJS)
	@echo ".o file Libjson delete"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "Binary Libjson delete"


re: fclean all

.PHONY: clean fclean re all
