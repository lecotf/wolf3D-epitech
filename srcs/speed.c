/*
** speed.c for speed in /home/lecot_f/clone/MUL_2014_wolf3d
** 
** Made by Florian Lécot
** Login   <lecot_f@epitech.net>
** 
** Started on  Sun Dec 21 02:58:43 2014 Florian Lécot
** Last update Mon Apr  3 17:40:54 2017 
*/

#include	"wolf.h"

void		increase_speed(t_data *data)
{
  double	temp_speed;

  temp_speed = SPEED + 0.005;
  if (temp_speed < 0.40)
    SPEED = temp_speed;
}

void		decrease_speed(t_data *data)
{
  double	temp_speed;

  temp_speed = SPEED - 0.005;
  if (temp_speed > 0.02)
    SPEED = temp_speed;
}
