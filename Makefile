CC			=	gcc

NAME		= 	map
NAMELIB		= 	libft.a

SRCDIR		= 	./srcs/
OBJDIR		=	./objs/
LIBDIR		= 	./libft/
INCDIR		= 	./includes/

SRC			=	main.c \
                ft_new_map_data.c \
                ft_put_map_data.c \
                ft_put_map_data_in_list.c \
                ft_match_key_in_list.c \
                ft_map_get.c \
                ft_create_list_strings.c

INCLUDES	=	-I$(INCDIR)
LIBFT		=	-L$(LIBDIR) -lft
CFLAGS		=	-Wall -Wextra -Werror -g $(INCLUDES)

OBJS		=	$(patsubst %.c,$(OBJDIR)%.o,$(SRC))

all: $(NAMELIB) $(NAME) $(NAMECLI)

$(OBJDIR)%.o: $(SRCDIR)%.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAMELIB):
	@make -C $(LIBDIR)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(INCLUDES) $(OBJS) $(LIBFT) $(CFLAGS)

clean:
	@rm -rf $(OBJDIR)
	@make -C $(LIBDIR) clean

fclean: clean
	@rm -f $(NAME)
	@rm -f $(NAMECLI)
	@make -C $(LIBDIR) fclean

re: fclean all

.PHONY: clean fclean re all
