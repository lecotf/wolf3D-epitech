/*
** main.c for main in /home/lecot_f/igraph/MUL_2014_wolf3d
** 
** Made by Florian Lécot
** Login   <lecot_f@epitech.net>
** 
** Started on  Mon Dec 15 17:05:22 2014 Florian Lécot
** Last update Mon Nov 21 11:35:22 2016 
*/

#include	<X11/X.h>
#include	<stdlib.h>
#include	<stdio.h>
#include	"wolf.h"

int		main()
{
  t_data	data;
  t_image	img;
  t_move	mov;
  t_rayc	rayc;

  set_data(&img, &mov, &rayc, &data);
  if ((img.mlx_p = mlx_init()) == NULL)
    {
      fprintf(stderr, "Error, initialisation of MLX failed.\n");
      return (1);
    }
  img.win_p = mlx_new_window(img.mlx_p, WIDTH, HEIGHT, "Wolf BABOU !");
  img.img_p = mlx_new_image(img.mlx_p, WIDTH, HEIGHT);
  img.data = (void *)mlx_get_data_addr(img.img_p, &img.bpp,
				       &img.size_l, &img.endn);
  //  my_raycasting(&data); BUt... WHY ?
  mlx_hook(img.win_p, KeyPress, KeyPressMask, &press_key, &data);
  mlx_hook(img.win_p, KeyRelease, KeyReleaseMask, &release_key, &data);
  mlx_loop_hook(img.mlx_p, &gere_keycode, &data);
  mlx_loop(img.mlx_p);
  return (0);
}
