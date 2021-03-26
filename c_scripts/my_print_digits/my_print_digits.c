/*
** ETNA PROJECT, 15/03/2021 by sassi_r
** my_print_digits
** File description:
**      display digits on a single line, in ascending order
*/

void my_putchar(char c);


void my_print_digits(void)
{
    int digits;

    digits = '0';
    while (digits <= '9')
    {
        my_putchar(digits);
        digits++;
    }
}
