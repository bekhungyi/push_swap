/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 22:49:33 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/06/06 16:18:16 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*find_cheapest(t_node *stack)
{
	if (NULL == stack)
		return (NULL);
	while (stack)
	{
		if (stack->cheapest)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

void	rotate_both(t_node **a, t_node **b, t_node *cheapest_node)
{
	while (*a != cheapest_node->target_node
		&& *b != cheapest_node)
		rr(a, b);
	set_current_position(*a);
	set_current_position(*b);
}

void	reverse_rotate_both(t_node **a, t_node **b, t_node *cheapest_node)
{
	while (*a != cheapest_node->target_node
		&& *b != cheapest_node)
		rrr(a, b);
	set_current_position(*a);
	set_current_position(*b);
}

void	finish_rotation(t_node **stack, t_node *top_node, char stack_name)
{
	while (*stack != top_node)
	{
		if (stack_name == 'a')
		{
			if (top_node->above_median)
				ra(stack);
			else
				rra(stack);
		}
		else if (stack_name == 'b')
		{
			if (top_node->above_median)
				rb(stack);
			else
				rrb(stack);
		}	
	}
}

void	move_nodes(t_node **a, t_node **b)
{
	t_node	*cheapest_node;

	cheapest_node = find_cheapest(*b);
	if (cheapest_node->above_median
		&& cheapest_node->target_node->above_median)
		rotate_both(a, b, cheapest_node);
	else if (!(cheapest_node->above_median)
		&& !(cheapest_node->target_node->above_median))
		reverse_rotate_both(a, b, cheapest_node);
	finish_rotation(b, cheapest_node, 'b');
	finish_rotation(a, cheapest_node->target_node, 'a');
	pa(a, b);
}

void big_sort(t_node **a, t_node **b, int size)
{
	t_node	*smallest;

	while (size > 3)
	{
		pb(a, b);
		size--;
	}
	small_sort(a, b, 3);
	while (*b)
	{
		init_nodes(*a, *b);
		move_nodes(a, b);
	}
	set_current_position(*a);
	smallest = find_lowest(*a);
	if (smallest->above_median)
		while (*a != smallest)
			ra(a);
	else
		while (*a != smallest)
			rra(a);
}