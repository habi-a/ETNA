/*
** my_putstr.c for my_printf in /cygdrive/c/Users/Habi/Documents/ETNA/C/my_printf
** 
** Made by HABI Açal
** Login   <habi_a@etna-alternance.net>
** 
** Started on  Tue Dec 26 13:22:53 2017 HABI Açal
** Last update Tue Dec 26 13:22:55 2017 HABI Açal
*/
void		my_putchar(char c);

void		my_putstr(const char *str)
{
    int		i;

    i = 0;
    while (str[i] != '\0')
    {
        my_putchar(str[i]);
        i++;
    }
}
