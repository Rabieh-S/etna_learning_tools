/*
** ETNA PROJECT, 30/03/2021 by sassi_r
** [...]
** File description:
**      [...]
*/
#include "my_list.h"

void my_putstr(char *str){
    int i = 0;
    
    while (str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    }
}
