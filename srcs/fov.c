/*
** var_len_seg_p.c for var_len_seg_p in /home/lecot_f/clone/MUL_2014_wolf3d
** 
** Made by Florian Lécot
** Login   <lecot_f@epitech.net>
** 
** Started on  Sun Dec 21 17:28:03 2014 Florian Lécot
** Last update Sat Nov 19 21:20:59 2016 
*/

#include	<stdio.h>
#include	"wolf.h"

void		increase_FOV(t_data *data)
{
  double	temp_p;

  temp_p = SEG_P - 0.01;
  if (temp_p > 0.75)
    SEG_P = temp_p;
}

void		decrease_FOV(t_data *data)
{
  double	temp_p;

  temp_p = SEG_P + 0.01;
  if (temp_p < 1.5)
    SEG_P = temp_p;
}
