/*
** ETNA PROJECT, 15/03/2021 by sassi_r
** [...]
** File description:
**      alphabet printing function
*/

void  my_putchar(char c);

void my_print_alpha(void)
{
    char letter;

    letter = 'a';
    while (letter <= 'z')
        {
            my_putchar(letter);
            letter++;
        }
    my_putchar('\n');
}
 
