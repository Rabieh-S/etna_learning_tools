/*
** ETNA PROJECT, 02/04/2021 by sassi_r
** [...]
** File description:
**      [...]
*/
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "my_list.h"

int lookup_command(linked_list_t *list, int key)
{
    while (list != NULL)
    {
        if (list->key == key)
        {
            return (list->value);
        }
        list = list->next; 
    }
    return -1;
}

int removal_command(linked_list_t *list, int key)
{
    int temp = 0;
    while (list != NULL)
    {
        if (list->key == key)
        {
            temp = list->key; 
            return (list->value);
        }
        else 
        {
            list->key = -1;
            return (list->key);
        }
    }
}

int insertion_command(linked_list_t *list, int key, int value)
{
    linked_list_t *new_key;
    new_key = malloc(sizeof(list->key));
    if (new_key == NULL)
    {
        free(new_key);
        new_key = NULL;
    }

    if (list == NULL)
    {
        key = list->key;
        return key;
    }
    if (list != NULL)
    {
        list->value = value;
        return (list->key);
    }
    else 
    {
        return key;
    }
}

int main()
{
    char *line = NULL;
    linked_list_t *list = NULL;
    char *str = NULL;
    line = my_readline();


    while (line)
    {
  /*   if (my_strcmp(line, "\0") != ) */
        
            my_putstr(line);
            my_putchar('\n');
            line = my_readline();
        
    }
    return (0);
}
