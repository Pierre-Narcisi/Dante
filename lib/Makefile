##
## Makefile for Makefile in /home/axel/project/PSU_2016_my_printf
##
## Made by axel vandenabeele
## Login   <axel@epitech.net>
##
## Started on  Wed Nov 16 17:38:41 2016 axel vandenabeele
## Last update Fri Apr 28 16:19:59 2017 Axel Vandenabeele
##

CFLAGS	=	-lmy -L. -I./include

NAME	=	libmy_printf.a

CC	=	gcc

AR	=	ar rc

RM	=	rm -f

SRCS	=	my_c.c				\
		my_b.c				\
		my_dori.c			\
		my_s.c				\
		my_S.c				\
		my_x.c				\
		my_X.c				\
		my_o.c				\
		my_u.c				\
		my_unknow.c			\
		my_putchar.c			\
		my_putstr.c			\
		my_putstr_S.c			\
		my_put_nbr.c			\
		my_strlen.c			\
		my_put_nbr_unsigned.c		\
		my_printf.c			\
		my_put_nbr_base_unsigned.c

OBJS	=	$(SRCS:.c=.o)

all :		$(NAME)

$(NAME) :	$(OBJS)
		ar rc $(NAME) $(OBJS)

clean :
	$(RM) $(OBJS)

fclean :	clean
	$(RM) $(NAME)

re : 		fclean $(NAME)
