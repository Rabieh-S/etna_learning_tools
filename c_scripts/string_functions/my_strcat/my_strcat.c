/*
** ETNA PROJECT, 20/03/2021 by sassi_r
** [...]
** File description:
**      [...]
*/

char *strcat(char *dest, const char *src)
{
    int i = 0;
    int j = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0')
    {
        j++;
    }
    
        dest[i+j] = src[j];
    dest[i+j] = '\0';
    return dest;
}