##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## llist makefile
##

CC		=	gcc

RM		=	rm -f

LDFLAGS 	= 	-L ../lib/my_stdc

CFLAGS		=	-Wextra -Wall

CPPFLAGS	=	-I ./ -I ../my_stdc/

NAME		=	libllist.a

CLEAN		=	clean

MAKE		=	make

SRCS		=	./access_x_elem_llist.c 				\
			./add_node.c 						\
			./add_str_to_begin_llist.c 				\
			./alloc_node.c 						\
			./free_llist.c 						\
			./my_rev_list.c 					\
			./sort_nbr_llist_main.c 				\
			./sort_str_llist_alloc.c 				\
			./sort_str_llist_main.c 				\
			./sort_str_llist_manip.c

OBJS		=	$(SRCS:.c=.o)

all		: 	$(NAME)

$(NAME)		:	$(OBJS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

clean		:
		@$(RM) $(OBJS)

fclean		:	clean
		@$(RM) $(NAME)

re		:	fclean all

.PHONY: all, clean, fclean, re
