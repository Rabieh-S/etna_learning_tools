/*
** ETNA PROJECT, 15/03/2021 by sassi_r
** my_isneg
** File description:
**      display boolean parameters
*/

void my_putchar(char c);

void my_isneg(int n)
{
    if (n > '0')
    {
        my_putchar('P');
    }

    if (n < '0')
    {
        my_putchar('N');
    }

    if (n == '0')
    {
        my_putchar('P');
    }

}