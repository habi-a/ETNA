/*
** ennemy.c for Cardboard Pulley in /Users/habi_a/Documents/ETNA/C/Cardboard_Pulley/etape3
** 
** Made by HABI Açal
** Login   <habi_a@etna-alternance.net>
** 
** Started on  Thu Jan 25 18:29:59 2018 HABI Açal
** Last update Thu Jan 25 18:30:13 2018 HABI Açal
*/
#include "struct.h"

void	move_ennemy(t_char *ennemy, t_room *room, t_func_ptr_move *move_to, t_func_ptr_look *look_to)
{
    if (ennemy->exist)
    {
        if (room->time % 2 == 0)
        {
            if (room->time >= (0 * 2) && room->time <= (4 * 2))
                move(ennemy, room, move_to, E_LEFT);
            else if (room->time == (5 * 2))
                look(ennemy, look_to, E_SOUTH);
            else if (room->time >= (6 * 2) && room->time <= (8 * 2))
                move(ennemy, room, move_to, E_BACKWARD);
            else if (room->time == (9 * 2))
                look(ennemy, look_to, E_EAST);
            else if (room->time >= (10 * 2) && room->time <= (14 * 2))
                move(ennemy, room, move_to, E_RIGHT);
            else if (room->time == (15 * 2))
                look(ennemy, look_to, E_NORTH);
            else if (room->time >= (16 * 2) && room->time <= (18 * 2))
                move(ennemy, room, move_to, E_FORWARD);
            else if (room->time == (19 * 2))
            {
                look(ennemy, look_to, E_WEST);
                room->time = (-1) * 2;
            }
        }
        else
        {
            my_putstr(ennemy->name);
            my_putstr(" \033[0;33mis waiting\033[0m\n");
        }
    }
    else
    {
        my_putstr(ennemy->name);
        my_putstr(" \033[0;33mis not here\033[0m\n");
    }
}

void	move_ennemy_two(t_char *ennemy, t_room *room, t_func_ptr_move *move_to, t_func_ptr_look *look_to)
{
    if (ennemy->exist)
    {
        if (room->time_two % 2 == 0)
        {
            if (room->time_two >= (0 * 2) && room->time_two <= (8 * 2))
                move(ennemy, room, move_to, E_LEFT);
            else if (room->time_two == (9 * 2))
                look(ennemy, look_to, E_SOUTH);
            else if (room->time_two >= (10 * 2) && room->time_two <= (13 * 2))
                move(ennemy, room, move_to, E_BACKWARD);
            else if (room->time_two == (14 * 2))
                look(ennemy, look_to, E_EAST);
            else if (room->time_two >= (15 * 2) && room->time_two <= (21 * 2))
                move(ennemy, room, move_to, E_RIGHT);
            else if (room->time_two == (22 * 2))
                look(ennemy, look_to, E_NORTH);
            else if (room->time_two >= (23 * 2) && room->time_two <= (26 * 2))
                move(ennemy, room, move_to, E_FORWARD);
            else if (room->time_two == (27 * 2))
            {
                look(ennemy, look_to, E_WEST);
                room->time_two = 3;
            }
        }
        else
        {
            my_putstr(ennemy->name);
            my_putstr(" \033[0;33mis waiting\033[0m\n");
        }
    }
    else
    {
        my_putstr(ennemy->name);
        my_putstr(" \033[0;33mis not here\033[0m\n");
    }
}
