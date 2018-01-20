/*
** init.c for Cardboard_Pulley in /cygdrive/c/Users/Habi/Documents/ETNA/C/Cardboard_Pulley/etape1
** 
** Made by HABI Açal
** Login   <habi_a@etna-alternance.net>
** 
** Started on  Sat Jan 20 23:32:11 2018 HABI Açal
** Last update Sat Jan 20 23:42:22 2018 HABI Açal
*/
#include <stdlib.h>
#include "struct.h"

void	init_room(t_room *room, char *path)
{
    room->map = NULL;
    room->size[E_X] = 0;
    room->size[E_Y] = 0;
    room->next = NULL;
    prepare_room(room, path);
    room->map = (char**) malloc(50 * sizeof(char*));
    for (int i = 0; i < room->size[E_X]; i++)
        room->map[i] = (char*) malloc(50 * sizeof(char));
}

void	init_player(t_char *player)
{
    player->id = 1;
    player->name = "Chicken";
    player->coord[E_X] = 0;
    player->coord[E_Y] = 0;
}

void	init_func_ptr(t_func_ptr_move *move_to, t_func_ptr_move *check_move_to)
{
    move_to[0] = &up_m;
    move_to[1] = &down_m;
    move_to[2] = &left_m;
    move_to[3] = &right_m;
    check_move_to[0] = &check_up_m;
    check_move_to[1] = &check_down_m;
    check_move_to[2] = &check_left_m;
    check_move_to[3] = &check_right_m;
}
