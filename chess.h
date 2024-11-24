#ifndef CHESS_H
# define CHESS_H

# include <mlx.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>

typedef struct	s_data
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

//init.c
char	**board_init(void);
//ui.c
void	draw_board(void *mlx, void *window, t_data *image, char **board);
//ui_utils.c
void	put_pixel(t_data *data, int x, int y, int color);
void	draw_line(t_data *image, int x, int y, int length, bool axis, int color);
void	draw_background(t_data *image, int color);
void	draw_rectangle(t_data *image, int startX, int startY, int endX, int endY, int color);


// void	display_piece(char piece);
// void	display_board(char **board);
// void	clear_console(void);

#endif