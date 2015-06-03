CC			=	gcc

NAME		= 	map
NAMELIB		= 	libft.a

SRCDIR		= 	./srcs/
OBJDIR		=	./objs/
LIBDIR		= 	./libft/
INCDIR		= 	./includes/

SRC			=	main.c \
				tests_strings.c \
				tests_ints.c \
				tests_maps.c \
				tests_lists_maps.c \
                ft_create_list_maps.c \
                ft_create_list_strings.c \
                ft_create_map_ints.c \
                ft_create_map_maps.c \
                ft_create_map_strings.c \
                ft_create_map_lists_maps.c \
                unity.c \
                ft_new_map.c \
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
                ft_map_put_pointer_on_int.c \
                ft_map_to_json.c \
                ft_list_of_map_to_json.c \

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

$(NAME): $(OBJS) $(OBJSUNITY)
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
