#include "chess.h"

void	place_piece(void *mlx, void *window, int x, int y, char piece)
{
	char	*path;
	void	*piece_img;
	int		width;
	int		height;

	(void)x;
	(void)y;
	if (piece == ' ')
		return ;
	if (piece == 'K')
		path = "./pieces/White_King.xpm";
	else if (piece == 'Q')
		path = "./pieces/White_Queen.xpm";
	else if (piece == 'B')
		path = "./pieces/White_Bishop.xpm";
	else if (piece == 'N')
		path = "./pieces/White_Knight.xpm";
	else if (piece == 'R')
		path = "./pieces/White_Rook.xpm";
	else if (piece == 'P')
		path = "./pieces/White_Pawn.xpm";
	else if (piece == 'k')
		path = "./pieces/Black_King.xpm";
	else if (piece == 'q')
		path = "./pieces/Black_Queen.xpm";
	else if (piece == 'b')
		path = "./pieces/Black_Bishop.xpm";
	else if (piece == 'n')
		path = "./pieces/Black_Knight.xpm";
	else if (piece == 'r')
		path = "./pieces/Black_Rook.xpm";
	else if (piece == 'p')
		path = "./pieces/Black_Pawn.xpm";
	else
		path = "";
	piece_img = mlx_xpm_file_to_image(mlx, path, &width, &height);
	mlx_put_image_to_window(mlx, window, &piece_img, 200, 200);
}

void	place_all_pieces(void *mlx, void *window, char **board)
{
	int	i;
	int	j;

	i = -1;
	while (++i < 8)
	{
		j = -1;
		while (++j < 8)
			place_piece(mlx, window, i, j, board[i][j]);
	}
}

void	draw_board(void *mlx, void *window, t_data *image, char **board)
{
	draw_background(image, 0x000f3b14);
	draw_line(image, 50, 50, 800, false, 0x00000000);
	draw_line(image, 50, 50, 800, true, 0x00000000);
	draw_line(image, 50, 850, 800, false, 0x00000000);
	draw_line(image, 850, 50, 800, true, 0x00000000);

	draw_rectangle(image, 50, 50, 150, 150, 0x008F6B5A);
	draw_rectangle(image, 150, 50, 250, 150, 0x0040261A);
	draw_rectangle(image, 250, 50, 350, 150, 0x008F6B5A);
	draw_rectangle(image, 350, 50, 450, 150, 0x0040261A);
	draw_rectangle(image, 450, 50, 550, 150, 0x008F6B5A);
	draw_rectangle(image, 550, 50, 650, 150, 0x0040261A);
	draw_rectangle(image, 650, 50, 750, 150, 0x008F6B5A);
	draw_rectangle(image, 750, 50, 850, 150, 0x0040261A);

	draw_rectangle(image, 50, 150, 150, 250, 0x0040261A);
	draw_rectangle(image, 150, 150, 250, 250, 0x008F6B5A);
	draw_rectangle(image, 250, 150, 350, 250, 0x0040261A);
	draw_rectangle(image, 350, 150, 450, 250, 0x008F6B5A);
	draw_rectangle(image, 450, 150, 550, 250, 0x0040261A);
	draw_rectangle(image, 550, 150, 650, 250, 0x008F6B5A);
	draw_rectangle(image, 650, 150, 750, 250, 0x0040261A);
	draw_rectangle(image, 750, 150, 850, 250, 0x008F6B5A);

	draw_rectangle(image, 50, 250, 150, 350, 0x008F6B5A);
	draw_rectangle(image, 150, 250, 250, 350, 0x0040261A);
	draw_rectangle(image, 250, 250, 350, 350, 0x008F6B5A);
	draw_rectangle(image, 350, 250, 450, 350, 0x0040261A);
	draw_rectangle(image, 450, 250, 550, 350, 0x008F6B5A);
	draw_rectangle(image, 550, 250, 650, 350, 0x0040261A);
	draw_rectangle(image, 650, 250, 750, 350, 0x008F6B5A);
	draw_rectangle(image, 750, 250, 850, 350, 0x0040261A);

	draw_rectangle(image, 50, 350, 150, 450, 0x0040261A);
	draw_rectangle(image, 150, 350, 250, 450, 0x008F6B5A);
	draw_rectangle(image, 250, 350, 350, 450, 0x0040261A);
	draw_rectangle(image, 350, 350, 450, 450, 0x008F6B5A);
	draw_rectangle(image, 450, 350, 550, 450, 0x0040261A);
	draw_rectangle(image, 550, 350, 650, 450, 0x008F6B5A);
	draw_rectangle(image, 650, 350, 750, 450, 0x0040261A);
	draw_rectangle(image, 750, 350, 850, 450, 0x008F6B5A);

	draw_rectangle(image, 50, 450, 150, 550, 0x008F6B5A);
	draw_rectangle(image, 150, 450, 250, 550, 0x0040261A);
	draw_rectangle(image, 250, 450, 350, 550, 0x008F6B5A);
	draw_rectangle(image, 350, 450, 450, 550, 0x0040261A);
	draw_rectangle(image, 450, 450, 550, 550, 0x008F6B5A);
	draw_rectangle(image, 550, 450, 650, 550, 0x0040261A);
	draw_rectangle(image, 650, 450, 750, 550, 0x008F6B5A);
	draw_rectangle(image, 750, 450, 850, 550, 0x0040261A);

	draw_rectangle(image, 50, 550, 150, 650, 0x0040261A);
	draw_rectangle(image, 150, 550, 250, 650, 0x008F6B5A);
	draw_rectangle(image, 250, 550, 350, 650, 0x0040261A);
	draw_rectangle(image, 350, 550, 450, 650, 0x008F6B5A);
	draw_rectangle(image, 450, 550, 550, 650, 0x0040261A);
	draw_rectangle(image, 550, 550, 650, 650, 0x008F6B5A);
	draw_rectangle(image, 650, 550, 750, 650, 0x0040261A);
	draw_rectangle(image, 750, 550, 850, 650, 0x008F6B5A);

	draw_rectangle(image, 50, 650, 150, 750, 0x008F6B5A);
	draw_rectangle(image, 150, 650, 250, 750, 0x0040261A);
	draw_rectangle(image, 250, 650, 350, 750, 0x008F6B5A);
	draw_rectangle(image, 350, 650, 450, 750, 0x0040261A);
	draw_rectangle(image, 450, 650, 550, 750, 0x008F6B5A);
	draw_rectangle(image, 550, 650, 650, 750, 0x0040261A);
	draw_rectangle(image, 650, 650, 750, 750, 0x008F6B5A);
	draw_rectangle(image, 750, 650, 850, 750, 0x0040261A);

	draw_rectangle(image, 50, 750, 150, 850, 0x0040261A);
	draw_rectangle(image, 150, 750, 250, 850, 0x008F6B5A);
	draw_rectangle(image, 250, 750, 350, 850, 0x0040261A);
	draw_rectangle(image, 350, 750, 450, 850, 0x008F6B5A);
	draw_rectangle(image, 450, 750, 550, 850, 0x0040261A);
	draw_rectangle(image, 550, 750, 650, 850, 0x008F6B5A);
	draw_rectangle(image, 650, 750, 750, 850, 0x0040261A);
	draw_rectangle(image, 750, 750, 850, 850, 0x008F6B5A);
	place_all_pieces(mlx, window, board);
}