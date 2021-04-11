/*
** ETNA PROJECT, 30/03/2021 by sassi_r
** [...]
** File description:
**      [...]
*/
#include "my_list.h"

int my_getnbr( char *str){
    int i = 0;
    int number = 0;
    int tmp = 0;
    while(i < my_strlen(str))
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            tmp = str[i] - 48;
            number = number * 10;
            number = number + tmp;
            i++;
        }
        else
        {
            i++;
        }
    }
    return number;
}
