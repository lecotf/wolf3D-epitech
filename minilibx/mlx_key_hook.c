/*
** mlx_key_hook.c for MiniLibX in 
** 
** Made by Charlie Root
** Login   <ol@epitech.net>
** 
** Started on  Thu Aug  3 11:49:06 2000 Charlie Root
** Last update Sun Dec 21 19:14:45 2014 Maxime
*/


#include	"mlx_int.h"




int		mlx_key_hook(t_win_list *win,int (*funct)(),void *param)
{
  win->hooks[KeyPress].hook = funct;
  win->hooks[KeyPress].param = param;
  win->hooks[KeyPress].mask = KeyPressMask;
}
