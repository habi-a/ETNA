/*
** my_put_nbr.c for my_printf in /cygdrive/c/Users/Habi/Documents/ETNA/C/my_printf
** 
** Made by HABI Açal
** Login   <habi_a@etna-alternance.net>
** 
** Started on  Tue Dec 26 13:19:21 2017 HABI Açal
** Last update Thu Jan  4 21:21:39 2018 HABI Açal
*/
#include "my_printf.h"

void	my_put_un_nbr(unsigned int n)
{
    int	i;
    int	divisible;

    divisible = n / 10;
    i = n % 10;
    if (divisible != 0)
    {
        my_put_un_nbr(divisible);
    }
    my_putchar(i + '0');
}

void	my_put_nbr(int n)
{
    if (n < 0)
    {
        my_putchar('-');
        n *= (-1);
    }
    my_put_un_nbr(n);
}
