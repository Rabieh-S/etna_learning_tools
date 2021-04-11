CC		=	gcc

RM		=	rm -f

CFLAGS 	=	-W -Werror -Wextra -Wimplicit -ansi -pedantic -g3

CFLAGS	+=	-I ./include/

NAME	=	my_crd

SRC		=	my_putchar.c \
			my_putstr.c \
			my_strlen.c \
			my_getnbr.c \
			my_putnbr.c	\
			my_readline.c \
			my_strcmp.c \
			my_crd.c

OBJS	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME)	:	$(OBJS)
	$(CC)	-o	$(NAME)	$(OBJS)	$(CFLAGS)

clean	:
	$(RM)	$(OBJS)

fclean	:	clean
	$(RM)	$(NAME)

re	:	fclean	all

.PHONY	:	all clean fclean re
