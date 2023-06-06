/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:41:51 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/06/06 15:50:26 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>

typedef struct s_node
{
	int				num;
	struct	s_node	*prev;
	struct	s_node	*next;
	int				size;
	
	bool			above_median;
	int				current_position;
	bool				cheapest;
	struct s_node	*target_node;
	int					push_price;
}		t_node;

void	ft_putstr(char *s);
long	ft_atoi(const char *str);
char	**ft_split(char *str, char separator);

void	stack_init(t_node **a, char **av);

void	free_stack(t_node **a, char **av);
int		check_num(char *str);
int		check_dup(t_node *current_node, int num);
void	make_node(t_node **a, int num);
int		check_sort(t_node *a);

int		get_stack_size(t_node *addr);
t_node	*find_last_node(t_node *addr);
t_node	*find_highest(t_node *a);
t_node	*find_lowest(t_node *a);

void	sort_3(t_node **a, int size);
void	sort_5(t_node **a, t_node **b, int size);
void	small_sort(t_node **a, t_node **b, int size);
void	big_sort(t_node **a, t_node **b, int size);

void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);
void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);
void	pa(t_node **a, t_node **b);
void	pb(t_node **a, t_node **b);

void	set_current_position(t_node *stack);
void	init_nodes(t_node *a, t_node *b);

#endif
