# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/24 15:41:48 by bhung-yi          #+#    #+#              #
#    Updated: 2023/06/06 15:55:17 by bhung-yi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap
CC			= gcc
FLAGS		= -Wall -Werror -Wextra
RM			= /bin/rm -f

SRCS	= 	./srcs/stack_init.c \
			./srcs/ft_utils.c \
			./srcs/checks.c \
			./srcs/check_utils.c \
			./srcs/make_node.c \
			./srcs/rotate.c \
			./srcs/rev_rotate.c \
			./srcs/push.c \
			./srcs/swap.c \
			./srcs/small_sort.c \
			./srcs/big_sort.c \
			./srcs/sort_init.c

%.o: %.c
	$(CC) -Wall -Wextra -Werror -Imlx -c $< -o $@

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) push_swap.c $(SRCS) -o $(NAME) -fsanitize=address

re: fclean all

clean:
	$(RM) -r *.o

fclean: clean
	$(RM) $(NAME)
