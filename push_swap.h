/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:41:51 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/06/03 18:32:26 by bhung-yi         ###   ########.fr       */
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
	int				size;
}		t_node;

void	stack_init(t_node **a, char **av);

void	free_stack(t_node **a, char **av);
int		check_num(char *str);
int		check_dup(t_node *current_node, int num);
void	make_node(t_node **a, int num);
int		check_sort(t_node *a);

int		get_stack_size(t_node *addr);
t_node	*find_last_node(t_node *addr);

void	sort_3(t_node **a, int size);

void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);

void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);

#endif
