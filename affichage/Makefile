##
## Makefile for Makefile in /home/axel/projects/progress/dante/
##
## Made by Axel Vandenabeele
## Login   <axel.vandenabeele@epitech.eu>
##
## Started on  Fri Apr 28 14:40:42 2017 Axel Vandenabeele
## Last update Sun May 14 21:41:26 2017 Axel Vandenabeele
##

NAME	=	render

CC	=	gcc

RM =		rm -f

SRCS	= main_afficher.c \
				make_render.c \
				get_next_line.c \
				my_afficher.c \
				my_strdup.c \

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-W -Wall -Werror -Wextra -I../include -lc_graph_prog

all	:	$(NAME)

$(NAME)	: $(OBJS)
					$(CC) $(OBJS) $(CFLAGS) -o $(NAME)
					$(RM) $(OBJS)

clean	:
		$(RM) $(NAME)

fclean	:	clean
			$(RM) $(OBJS)

re	:	fclean all
