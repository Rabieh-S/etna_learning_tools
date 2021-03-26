/*
** ETNA PROJECT, 22/03/2021 by sassi_r
** [...]
** File description:
**      [...]
*/
int my_fibonacci_rec(int nb)
{
    if (nb == 0)
    {
        return 0;
    }
    if (nb == 1)
    {
        return 1;
    }
    else
    {
        return ((my_fibonacci_rec(nb - 1)) + (my_fibonacci_rec(nb - 2)));
    }
}