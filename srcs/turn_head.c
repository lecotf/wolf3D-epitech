/*
** turn_head.c for turn_head in /home/lecot_f/clone/MUL_2014_wolf3d
** 
** Made by Florian Lécot
** Login   <lecot_f@epitech.net>
** 
** Started on  Sun Dec 21 12:55:02 2014 Florian Lécot
** Last update Thu Nov 24 17:25:34 2016 
*/

#include	<math.h>
#include	"wolf.h"

void		look_up(t_data *data)
{
  if (CENTER + (HEIGHT / 70) < HEIGHT)
    CENTER += (HEIGHT / 70);
}

void		look_down(t_data *data)
{
  if (CENTER - (HEIGHT / 70) > 0)
    CENTER -= (HEIGHT / 70);
}

void		turn_left(t_data *data)
{
  ANGLE += 4;
  if (ANGLE >= 360)
    ANGLE -= 360;
  COS_ANGLE = cos((ANGLE / 180) * P);
  SIN_ANGLE = sin((ANGLE / 180) * P);
}

void		turn_right(t_data *data)
{
  ANGLE -= 4;
  if (ANGLE < 0)
    ANGLE += 360;
  COS_ANGLE = cos((ANGLE / 180) * P);
  SIN_ANGLE = sin((ANGLE / 180) * P);
}
