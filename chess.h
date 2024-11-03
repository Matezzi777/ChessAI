#ifndef CHESS_H
# define CHESS_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

char	**init_board(void);
void	display_piece(char piece);
void	display_board(char **board);

#endif