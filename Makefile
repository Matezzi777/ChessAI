#COMPILING
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I/usr/include -I.
RM = rm -rf
NAME = chessAI

#FILES
SRCS = main.c \
		init.c \
		display.c \
		move.c
OBJS = $(SRCS:.c=.o)

#COLORS
RED = \033[1;31m
GREEN = \033[1;32m
BLUE = \033[0;34m
END = \033[0m

#COMPILING RULES
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

#CLEANING RULES
fclean: clean
	$(RM) $(NAME)

clean:
	$(RM) *.o

re: fclean all

.PHONY: all fclean clean re