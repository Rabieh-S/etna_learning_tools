/*
** ETNA PROJECT, 30/03/2021 by sassi_r
** [...]
** File description:
**      [...]
*/
#include "my_list.h"

int my_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}
