##
## Makefile for Makefile in /home/axel/project/en cours/PSU_2016_minishell1/
##
## Made by Axel Vandenabeele
## Login   <axel.vandenabeele@epitech.eu@epitech.eu>
##
## Started on  Mon Jan 16 10:14:39 2017 Axel Vandenabeele
## Last update Wed Apr 26 13:50:46 2017 Axel Vandenabeele
##

NAME	=	generator

CC	=	gcc

RM =		rm -f

SRCS	=	main.c \
				generator.c \
				my_is.c \
				print_tab.c \
				algo.c \
				structs.c \
				my_strlen.c \

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
