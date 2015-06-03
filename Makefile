CC			=	gcc

NAME		= 	map
NAMELIB		= 	libft.a
NAMELIBMAP	=	libmap.a
NAMELIBJSON	=	libjson.a

SRCDIR		= 	./srcs/
OBJDIR		=	./objs/
LIBDIR		= 	./libft/
LIBMAPDIR	= 	./libmap/
LIBJSONDIR	= 	./libjson/
INCDIR		= 	./includes/

SRC			=	main.c \
				tests_strings.c \
				tests_ints.c \
				tests_maps.c \
				tests_lists_maps.c \
				tests_map_all.c \
                ft_create_list_maps.c \
                ft_create_list_strings.c \
                ft_create_map_ints.c \
                ft_create_map_maps.c \
                ft_create_map_strings.c \
                ft_create_map_lists_maps.c \
                unity.c

INCLUDES	=	-I$(INCDIR)
LIBFT		=	-L$(LIBDIR) -lft
LIBMAP		=	-L$(LIBMAPDIR) -lmap
LIBJSON		=	-L$(LIBJSONDIR) -ljson
CFLAGS		=	-Wall -Wextra -Werror -g $(INCLUDES)

OBJS		=	$(patsubst %.c,$(OBJDIR)%.o,$(SRC))

all: $(NAMELIB) $(NAMELIBMAP) $(NAMELIBJSON) $(NAME) $(NAMECLI)

$(OBJDIR)%.o: $(SRCDIR)%.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAMELIB):
	@make -C $(LIBDIR)

$(NAMELIBMAP):
	@make -C $(LIBMAPDIR)

$(NAMELIBJSON):
	@make -C $(LIBJSONDIR)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(INCLUDES) $(OBJS) $(LIBFT) $(LIBMAP) $(LIBJSON) $(CFLAGS)

clean:
	@rm -rf $(OBJDIR)
	@make -C $(LIBDIR) clean
	@make -C $(LIBMAPDIR) clean
	@make -C $(LIBJSONDIR) clean

fclean: clean
	@rm -f $(NAME)
	@rm -f $(NAMECLI)
	@make -C $(LIBDIR) fclean
	@make -C $(LIBMAPDIR) fclean
	@make -C $(LIBJSONDIR) fclean

re: fclean all

.PHONY: clean fclean re all
