/*
** ETNA PROJECT, 02/04/2021 by sassi_r
** [...]
** File description:
**      [...]
*/
#ifndef _MY_LIST_H_
#define _MY_LIST_H_

typedef struct s_list {
    int key;
    int value;
    struct s_list *next;
}linked_list_t;

int my_strlen(char *);
int my_getnbr(char *str);
void my_putchar(char c);
void my_putnbr(int n);
void my_putstr(char *str);
char *my_readline(void);
int my_strcmp(const char *s1, const char *s2);

#endif