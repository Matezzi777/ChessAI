#include "chess.h"

void	display_board(char **board)
{
	int	i;
	int	j;

	i = 7;
	write(1, "\n", 1);
	while (i > -1)
	{
		j = 0;
		write(1, " ", 1);
		while (j < 8)
		{
			display_piece(board[i][j]);
			if (j < 7)
				write(1, " | ", 3);
			j++;
		}
		write(1, " \n", 2);
		if (i > 0)
			write(1, "--- --- --- --- --- --- --- ---\n",32);
		i--;
	}
	write(1, "\n", 1);
}

void	display_piece(char piece)
{
	char	*symbol;

	if (piece == 'r')
		symbol = "♖";
	else if (piece == 'R')
		symbol = "♜";
	else if (piece == 'n')
		symbol = "♘";
	else if (piece == 'N')
		symbol = "♞";
	else if (piece == 'b')
		symbol = "♗";
	else if (piece == 'B')
		symbol = "♝";
	else if (piece == 'q')
		symbol = "♕";
	else if (piece == 'Q')
		symbol = "♛";
	else if (piece == 'k')
		symbol = "♔";
	else if (piece == 'K')
		symbol = "♚";
	else if (piece == 'p')
		symbol = "♙";
	else if (piece == 'P')
		symbol = "♟";
	else if (piece == ' ')
		symbol = " ";
	else
		symbol = "?";
	write(1, symbol, strlen(symbol));
}