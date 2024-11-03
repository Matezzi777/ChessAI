#include "chess.h"

int	make_move(char **board, t_move move)
{
	char	piece;
	char	dest;

	if (move.startX < 0 || move.startX > 7 || move.startY < 0 || move.startY > 7)
		return (0);
	if (move.endX < 0 || move.endX > 7 || move.endY < 0 || move.endY > 7)
		return (0);
	piece = board[move.startX][move.startY];
	dest = board[move.endX][move.endY];
	if (is_legal(board, piece, move))
	{
		board[move.endX][move.endY] = piece;
		board[move.startX][move.startY] = ' ';
		return (1);
	}
	else
		return (0);
}

int	is_legal(char **board, char piece, t_move move)
{
	if (piece == 'K' || piece == 'k')
		return (king_move_check(board, move));
	else if (piece == 'Q' || piece == 'q')
		return (queen_move_check(board, move));
	else if (piece == 'B' || piece == 'b')
		return (bishop_move_check(board, move));
	else if (piece == 'N' || piece == 'n')
		return (knight_move_check(board, move));
	else if (piece == 'R' || piece == 'r')
		return (rook_move_check(board, move));
	else if (piece == 'P' || piece == 'p')
		return (pawn_move_check(board, move));
	else
		return (0);
}