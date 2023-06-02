/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:41:51 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/06/02 17:08:04 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <limits.h>
# include "./libft/libft.h"

typedef struct s_node
{
	int				num;
	struct	s_node	*prev;
	struct	s_node	*next;
}		t_node;

void	stack_init(t_node **a, char **av);

void	free_stack(t_node **a, char **av);
int		check_num(char *str);
int		check_dup(t_node *current_node, int num);
void	make_node(t_node **a, int num);

#endif