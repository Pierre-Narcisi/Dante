##
## Makefile for Makefile in /home/axel/projects/progress/dante/
##
## Made by Axel Vandenabeele
## Login   <axel.vandenabeele@epitech.eu>
##
## Started on  Fri Apr 28 14:40:42 2017 Axel Vandenabeele
## Last update Wed May  3 12:47:21 2017 Axel Vandenabeele
##

NAME	=	render

CC	=	gcc

RM =		rm -f

SRCS	= main_afficher.c \
				make_render.c \
				get_next_line.c \
				my_afficher.c \

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-W -Wall -Werror -Wextra -I../include -lc_graph_prog

LIB	= -L../lib -lmy_printf

all	:	$(NAME)

$(NAME)	: $(OBJS)
					make -C ../lib re
					$(CC) $(OBJS) $(CFLAGS) -o $(NAME) $(LIB)
					$(RM) $(OBJS)

clean	:
		make -C ../lib clean
		$(RM) $(NAME)

fclean	:	clean
		make -C ../lib fclean
		$(RM) $(OBJS)

re	:	fclean all
