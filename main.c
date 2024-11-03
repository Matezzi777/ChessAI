#include "chess.h"

int	main(void)
{
	char	**board;

	board = init_board();
	display_board(board);
}