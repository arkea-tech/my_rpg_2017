##
## EPITECH PROJECT, 2018
## Makefile_for tests
## File description:
## General tests
## DO NOT LAUNCH THIS MAKEFILE DIRECTLY
## This makefile can only work if launched from the main makefile with the "test_run" command
##

TFLAGS		=	-Wextra -Wall --coverage

CPPFLAGS	=	-I ../include -I ../lib/my_stdc/ -I ./include
LDFLAGS		=	-L ../lib/my_stdc
LDLIBS		=	-lmy_stdc

TSRCS_PATH	=	$(addprefix ../, $(TSRCS))

TFILE		=	./test_forbidden_functions.c

TSRCS_NOTDIR	=	$(notdir $(TSRCS))
TSRCS_NOTDIR	+=	$(TFILE)

TOBJS		=	$(TSRCS_NOTDIR:c=gcno)
TOBJS		+=	$(TSRCS_NOTDIR:c=gcda)
TOBJS		+=	$(TSRCS_NOTDIR:c=c.gcov)
TOBJS		+=	$(TFILE:c=gcda)
TOBJS		+=	$(TFILE:c=gcno)
TOBJS		+=	$(TFILE:c=c.gcov)

NAME		=	tests_bin

all		:	$(NAME)

$(NAME)		:
		$(MAKE) -C ../lib/my_stdc/
		$(MAKE) -C ../lib/llist/
		$(CC) $(TFLAGS) -o $(NAME) $(CPPFLAGS) $(TSRCS_PATH) $(TFILE) $(LDFLAGS) $(LDLIBS) -lcriterion
		mv $(NAME) ../
		../$(NAME)

tests_run	:
		$(MAKE) -C ../ tests_run

clean		:
		$(RM) $(TOBJS)

fclean		:	clean
		$(RM) ../$(NAME)
		$(MAKE) -C ../lib/my_stdc/ fclean
		$(MAKE) -C ../lib/llist/ fclean

re		: fclean all

.PHONY:	all clean fclean re
