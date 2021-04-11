CC		=	gcc

RM		=	rm -f

CFLAGS 	=	-W -Werror -Wextra -Wimplicit -ansi -pedantic -g3

CFLAGS	+=	-I ./include/

NAME	=	

SRC		=	


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
