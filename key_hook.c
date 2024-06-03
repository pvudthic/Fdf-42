#include "fdf.h"

void	color_screen(t_var *data, int color)
{
	int	x;
	int	y;

	y = 0;
	while (y < SIDE_LEN)
	{
		x = 0;
		while (x < SIDE_LEN)
		{
			my_pixel_put(&data->img, x, y, color);
			x++;
		}
		y++;
	}
}

int	key_manage(int keysym, t_var *data)
{
	if (keysym == XK_r)
		color_screen(data, 0xff0000);
	else if (keysym == XK_g)
		color_screen(data, 0xff00);
	else if (keysym == XK_b)
		color_screen(data, 0xff);
	else if (keysym == XK_Escape)
		exit(1);
	mlx_put_image_to_window(data->mlx,
							data->win,
							data->img.img_ptr,
							0, 0);
	return (0);
}
