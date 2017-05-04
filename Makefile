##
## Makefile for Makefile in /home/axel/projects/progress/dante/
##
## Made by Axel Vandenabeele
## Login   <axel.vandenabeele@epitech.eu>
##
## Started on  Thu May  4 10:26:19 2017 Axel Vandenabeele
## Last update Thu May  4 10:32:26 2017 Axel Vandenabeele
##

MAKEBREATH	=	make -C ./breadth

MAKEDEPTH	=	make -C ./depth

MAKEGENERATOR	=	make -C ./generator

MAKEASTAR	=	make -C ./astar

all	:
			$(MAKEGENERATOR)
			$(MAKEBREATH)
			$(MAKEDEPTH)
			$(MAKEASTAR)

clean	:
			$(MAKEGENERATOR) clean
			$(MAKEBREATH) clean
			$(MAKEDEPTH) clean
			$(MAKEASTAR) clean

fclean	:
					$(MAKEBREATH) fclean
					$(MAKEDEPTH) fclean
					$(MAKEASTAR) fclean
					$(MAKEGENERATOR) fclean

re	: fclean all
