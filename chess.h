#ifndef CHESS_H
# define CHESS_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_move
{
	int	startX;
	int	startY;
	int	endX;
	int	endY;
}			t_move;

char	**init_board(void);
void	display_piece(char piece);
void	display_board(char **board);
int		make_move(char **board, t_move move);
void	clear_console(void);

#endif