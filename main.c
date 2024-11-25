#include "chess.h"

int	main(void)
{
	t_data	img;
	void	*mlx;
	void	*window;
	char	**board;

	mlx = mlx_init();
	window = mlx_new_window(mlx, 900, 900, "ChessAI");
	board = board_init();
	if (!board)
		return (0);
	if (!window)
		return (0);
	img.img = mlx_new_image(mlx, 900, 900);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
	draw_board(&img);
	mlx_put_image_to_window(mlx, window, img.img, 0, 0);
	mlx_loop(mlx);
}