/*
** ETNA PROJECT, 22/03/2021 by sassi_r
** [...]
** File description:
**      [...]
*/
#include <stdio.h>
#include <unistd.h>

int my_factorial_rec(int nb)
{
    if (nb >= 1)
    {
        return nb * my_factorial_rec(nb - 1);
    }
    if (nb == 0)
    {
        return 1;
    }
    if (nb < 0)
    {
        return 0;
    }
}
