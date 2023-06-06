/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:44:17 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/06/06 16:20:33 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	set_current_position(t_node *stack)
{
	int	i;
	int	median;

	i = 0;
	if (stack == NULL)
		return ;
	median = get_stack_size(stack) / 2;
	while (stack)
	{
		stack->current_position = i;
		if (i <= median)
			stack->above_median = true;
		else
			stack->above_median = false;
		stack = stack->next;
		++i;
	}
}

void	set_target_node(t_node *a, t_node *b)
{
	t_node	*current;
	t_node	*target_node;
	long	best_match_index;

	while (b)
	{
		best_match_index = LONG_MAX;
		current = a;
		while (current)
		{
			if (current->num > b->num
				&& current->num < best_match_index)
			{
				best_match_index = current->num;
				target_node = current;
			}
			current = current->next;
		}
		if (LONG_MAX == best_match_index)
			b->target_node = find_lowest(a);
		else
			b->target_node = target_node;
		b = b->next;
	}
}

void	set_price(t_node *a, t_node *b)
{
	int	len_a;
	int	len_b;

	len_a = get_stack_size(a);
	len_b = get_stack_size(b);
	while (b)
	{
		b->push_price = b->current_position;
		if (!(b->above_median))
			b->push_price = len_b - (b->current_position);
		if (b->target_node->above_median)
			b->push_price += b->target_node->current_position;
		else
			b->push_price += len_a - (b->target_node->current_position);
		b = b->next;
	}
}

void	set_cheapest(t_node *b)
{
	t_node	*best_match_node;
	long	best_match_value;

	if (NULL == b)
		return ;
	best_match_value = LONG_MAX;
	while (b)
	{
		if (b->push_price < best_match_value)
		{
			best_match_value = b->push_price;
			best_match_node = b;
		}
		b = b->next;
	}
	best_match_node->cheapest = true;
}

void	init_nodes(t_node *a, t_node *b)
{
	set_current_position(a);
	set_current_position(b);
	set_target_node(a, b);
	set_price(a, b);
	set_cheapest(b);
}