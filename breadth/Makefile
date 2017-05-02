##
## Makefile for dante in /home/byliarus/work/AI/dante/breadth/
##
## Made by Pierre Narcisi
## Login   <pierre.nacisi@epitech.eu>
##
## Started on  Fri Apr 28 17:20:11 2017 Pierre Narcisi
## Last update Fri Apr 28 17:52:00 2017 Pierre Narcisi
##

NAME	=	solver

CC	=	gcc

RM =		rm -f

SRCS	=	main.c \
				parsing.c	\
				algo.c	\

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-W -Wall -Werror -Wextra -I../include -g

all	:	$(NAME)

$(NAME)	:	$(OBJS)
		$(CC) $(OBJS) $(CFLAGS) -o $(NAME) $(LIB)

clean	:
		$(RM) $(NAME)

fclean	:	clean
		$(RM) $(OBJS)

re	:	fclean all
