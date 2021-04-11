/*
** ETNA PROJECT, 18/03/2021 by sassi_r
** my_strcmp
** File description:
**      compare 2 char string
*/
#include <stdio.h>
#include "my_list.h"

void my_putchar(char c);
 
int my_strcmp(const char *s1, const char *s2)
{
    int i = 0;
    int cmp = 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i]!= '\0')
    {
        i++;
    }
    cmp = s1[i] - s2[i];
    return (cmp);
}
