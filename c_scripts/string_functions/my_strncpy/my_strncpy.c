/*
** ETNA PROJECT, 18/03/2021 by sassi_r
** my_strncpy
** File description:
**      a function that copies n characters
*/
void my_putchar(char c);

char *my_strncpy(char *dest, const char *src, int n)
{
    int i = 0;
    while (src[i] != '\0')
    {
        if (i < n && src[i] != '\0')
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return dest;   
}