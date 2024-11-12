#include "chess.h"

void	put_pixel(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

void	draw_line(t_data *image, int x, int y, int length, bool axis, int color)
{
	int	i;

	i = 0;
	while (i < length)
	{
		if (axis)
			put_pixel(image, x, y + i, color);
		else
			put_pixel(image, x + i, y, color);
		i++;
	}
}

void	draw_background(t_data *image, int color)
{
	int	i;
	int	j;

	i = -1;
	while(++i <= 900)
	{
		j = -1;
		while (++j <= 900)
			put_pixel(image, i, j, color);
	}
}

void	draw_rectangle(t_data *image, int startX, int startY, int endX, int endY, int color)
{
	int	i;
	int	j;

	j = startY;
	while (j <= endY)
	{
		i = startX;
		while (i <= endX)
		{
			put_pixel(image, i, j, color);
			i++;
		}
		j++;
	}
}