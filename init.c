#include "chess.h"

char	**init_board(void)
{
	char	**board;
	int		i;
	int		j;

	board = (char **)malloc(8 * sizeof(char *));
	i = 0;
	while (i < 8)
	{
		board[i] = (char *)malloc(9 * sizeof(char));
		board[i][8] = '\0';
		i++;
	}

	board[0][0] = 'R';
	board[0][7] = 'R';
	board[0][1] = 'N';
	board[0][6] = 'N';
	board[0][2] = 'B';
	board[0][5] = 'B';
	board[0][3] = 'Q';
	board[0][4] = 'K';
	i = -1;
	while (++i < 8)
		board[1][i] = 'P';
	i = 1;
	while (++i < 6)
	{
		j = -1;
		while (++j < 8)
			board[i][j] = ' ';
	}
	i = -1;
	while (++i < 8)
		board[6][i] = 'p';
	board[7][0] = 'r';
	board[7][7] = 'r';
	board[7][1] = 'n';
	board[7][6] = 'n';
	board[7][2] = 'b';
	board[7][5] = 'b';
	board[7][3] = 'q';
	board[7][4] = 'k';
	return (board);
}