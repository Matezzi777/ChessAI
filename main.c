#include "chess.h"

int	main(void)
{
	char	**board;
	t_move	move;

	board = init_board();
	display_board(board);
	while (1)
	{
		if (make_move(board, move) == 0)
		{
			printf("Invalid move\n.");
			exit(0);
		}
		display_board(board);
	}
}