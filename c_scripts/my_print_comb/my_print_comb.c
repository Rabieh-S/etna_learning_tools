/*
** ETNA PROJECT, 15/03/2021 by sassi_r
** my_print_comb
** File description:
**      display combination of numbers
*/
void my_putchar(char c);

void my_print_comb(void)
{
    char a = '0';
    char b = '0';
    char c = '0';
    while (a <= '7')
    {
        b = a + 1;
            while (b <= '8')
        {
            c = b + 1;
    
                while (c <= '9')
            {
                my_putchar(a);
                my_putchar(b);
                my_putchar(c);
                    if ((a != '7') || (b != '8') || (c != '9'))
                        {
                            my_putchar(',');
                            my_putchar(' ');
                        }
                c++;
            }
            b++;
        }
        a++;
    }
    
}