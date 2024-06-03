NAME	= fdf

CC		= gcc
CCFLAGS	= -Wall -Werror -Wextra
MLXFLAG = -Lminilibx -lXext -lX11 -lm -lz

SRC		=	main.c \
			render.c \
			key_hook.c


SRC_OBJ = $(SRC: %.c = obj/%.o)

$(NAME): $(SRC_OBJ) | obj
	$(CC) $(CCFLAGS) $(SRC_OBJ) minilibx/libmlx.a  $(MLXFLAG) -o $@

all: $(NAME)

obj:
	mkdir obj

clean:
	rm -rf obj

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
