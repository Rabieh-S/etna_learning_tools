/*
** ETNA PROJECT, 18/03/2021 by sassi_r
** my_strcpy
** File description:
**      writing a function that copies a string into another
*/
char *my_strcpy(char *dest, const char*src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        /* put char string source into
        our char string dest*/
        dest[i] = src[i];
        i++;
    }
    /* if char string src > char string dest
    dest will copy everything 
    so we put a stop condition */
    dest[i] = '\0';

    /* We return entirely 
    the char string dest*/
    return (dest[i]);
}
