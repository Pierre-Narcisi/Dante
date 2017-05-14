##
## Makefile for Makefile in /home/axel/project/en cours/PSU_2016_minishell1/
##
## Made by Axel Vandenabeele
## Login   <axel.vandenabeele@epitech.eu@epitech.eu>
##
## Started on  Mon Jan 16 10:14:39 2017 Axel Vandenabeele
## Last update Sat May 13 18:17:59 2017 Axel Vandenabeele
##

NAME	=	solver

CC	=	gcc

RM =		rm -f

SRCS	=	main.c \
				structs.c \
				solver.c \
				my_strcpy.c \
				get_next_line.c \
				my_strlen.c \
				print_tab.c \
				set_maze.c \
				my_strdup.c \
				my_free.c \

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-W -Wall -Werror -Wextra -I../include -Ofast

all	:	$(NAME)

$(NAME)	: 	$(OBJS)
		$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean	:
		$(RM) $(NAME)

fclean	:	clean
		$(RM) $(OBJS)

re	:	fclean all
