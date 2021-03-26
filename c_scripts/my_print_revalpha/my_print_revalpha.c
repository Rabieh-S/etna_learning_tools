/*
** ETNA PROJECT, 15/03/2021 by sassi_r
** my_print_revalpha
** File description:
**      display reverse alphabet
*/

void my_putchar(char c);

void my_print_revalpha(void)
{
    /* declaring variable with char (type of variable)*/
    char letter;

    letter = 'z';
    while (letter >= 'a')
        {
            my_putchar(letter);
            letter--;
        }
}
