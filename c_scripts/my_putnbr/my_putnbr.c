/*
** ETNA PROJECT, 16/03/2021 by sassi_r
** my_putnbr function
** File description:
**      display results as the argument 
*/
#include <stdio.h>
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

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

int main()
{
    my_putnbr(-25645);
}