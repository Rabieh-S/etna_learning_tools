/*
** ETNA PROJECT, 30/03/2021 by sassi_r
** [...]
** File description:
**      [...]
*/
#include "my_list.h"

void my_putnbr(int n)
{ 
    char ntd = (n % 10 + 48);
    if (n > 0)
    {
        n = n / 10;
        my_putnbr(n);
        my_putchar(ntd);
    }
    if (n < 0)
    {
        my_putchar('-');
        n = n * (-1);
        my_putnbr(n);
    }
}
