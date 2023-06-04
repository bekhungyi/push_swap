# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/24 15:41:48 by bhung-yi          #+#    #+#              #
#    Updated: 2023/06/04 18:19:50 by bhung-yi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap
CC			= gcc
FLAGS		= -Wall -Werror -Wextra
RM			= /bin/rm -f

LIBFTPATH	= ./libft
LIBFTNAME	= libft.a

INCLUDES	= 	./includes/stack_init.c \
				./includes/checks.c \
				./includes/check_utils.c \
				./includes/make_node.c \
				./includes/sort.c \
				./includes/rotate.c \
				./includes/rev_rotate.c \
				./includes/push.c \
				./includes/swap.c


%.o: %.c
	$(CC) -Wall -Wextra -Werror -Imlx -c $< -o $@

all: $(NAME)

$(NAME):
	make -C $(LIBFTPATH)
	mv $(LIBFTPATH)/$(LIBFTNAME) $(LIBFTNAME)
	$(CC) $(CFLAGS) push_swap.c $(LIBFTNAME) $(INCLUDES) $(MLX_FLAGS) -o $(NAME) -fsanitize=address

re: fclean all

clean:
	$(RM) -r *.o
	$(RM) -r $(LIBFTPATH)/*.o

fclean: clean
	$(RM) $(NAME)
	$(RM) $(LIBFTNAME)