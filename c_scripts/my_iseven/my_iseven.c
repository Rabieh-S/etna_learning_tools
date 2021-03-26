/*
** ETNA PROJECT, 15/03/2021 by sassi_r
** my_iseven
** File description:
**      displays either E parameter is even, O if odd
*/

void my_putchar(char c);

void my_iseven(int n)
{
    char n = '0';

    if (n %= '0')
    {
        my_putchar('E');
    }
    else {
        my_putchar('O');
    }
    
}