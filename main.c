#include "fdf.h"





int	main(void)
{
	t_var	vars;

	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx,
								SIDE_LEN,
								SIDE_LEN,
								"My window");

	vars.img.img_ptr = mlx_new_image(vars.mlx,
									SIDE_LEN,
									SIDE_LEN);
	vars.img.img_pixels_ptr = mlx_get_data_addr(vars.img.img_ptr,
												&vars.img.bits_per_pixel,
												&vars.img.line_len,
												&vars.img.endian);


	printf("Line_len %d <-> SIDE_LEN %d\n"
			"bpp %d\n"
			"endian %d\n", vars.img.line_len, SIDE_LEN, vars.img.bits_per_pixel, vars.img.endian);

	mlx_key_hook(vars.win, key_manage, &vars);
	mlx_loop(vars.mlx);
}
