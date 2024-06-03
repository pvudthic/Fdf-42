#ifndef FDF_H
# define FDF_H

#include "minilibx/mlx.h"
#include <X11/keysym.h>
#include <stdlib.h>
#include <stdio.h>

#define MALLOC_ERROR	1
#define	SIDE_LEN		800

typedef struct s_img
{
	void	*img_ptr;
	char	*img_pixels_ptr;
	int		bits_per_pixel;
	int		endian;
	int		line_len;
}				t_img;

/*
 * This struct contains all the mlx stuff
 * and the image where i will buffer my pixels
*/
typedef struct	s_var
{
	void	*mlx;
	void	*win;
	t_img	img;
}				t_var;

void	my_pixel_put(t_img *img, int x, int y, int color);
int		key_manage(int keysym, t_var *data);
void	color_screen(t_var *data, int color);

#endif
