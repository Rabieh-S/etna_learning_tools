/*
** ETNA PROJECT, 22/03/2021 by sassi_r
** [...]
** File description:
**      [...]
*/

#include <stdio.h>

int my_power_rec(int nb, int p)
{
    if (p == 0)
    {
        return 1;
    }
    if (p != 0)
    {
        return (nb * my_power_rec(nb, p - 1));
    }
    else
    {
        return 0;
    }
}