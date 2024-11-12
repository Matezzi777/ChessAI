#COMPILING
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I/usr/include -I. -Imlx_linux -O3
MLX = -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz
RM = rm -rf
NAME = chessAI

#FILES
SRCS = main.c \
		init.c \
		ui.c \
		ui_utils.c
OBJS = $(SRCS:.c=.o)

#COLORS
RED = \033[1;31m
GREEN = \033[1;32m
BLUE = \033[0;34m
END = \033[0m

#COMPILING RULES
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(MLX) -o $@

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

#CLEANING RULES
fclean: clean
	$(RM) $(NAME)

clean:
	$(RM) *.o

re: fclean all

.PHONY: all fclean clean re