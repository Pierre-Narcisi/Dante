##
## Makefile for Makefile in /home/axel/project/en cours/PSU_2016_minishell1/
##
## Made by Axel Vandenabeele
## Login   <axel.vandenabeele@epitech.eu@epitech.eu>
##
## Started on  Mon Jan 16 10:14:39 2017 Axel Vandenabeele
## Last update Thu Apr 20 14:28:18 2017 Axel Vandenabeele
##

NAME	=	generator

CC	=	gcc

RM =		rm -f

SRCS	=	generator.c \
				my_is.c \
				print_tab.c \
				algo.c \

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-W -Wall -Werror -Wextra -I./include -g

all	:	$(NAME)

$(NAME)	:	$(OBJS)
		$(CC) $(OBJS) $(CFLAGS) -o $(NAME) $(LIB)

clean	:
		$(RM) $(NAME)

fclean	:	clean
		$(RM) $(OBJS)

re	:	fclean all
