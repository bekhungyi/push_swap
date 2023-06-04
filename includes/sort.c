/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 23:55:56 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/06/04 18:19:28 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sort_3(t_node **a, int size)
{
	t_node *highest_node;
	
	if (size == 2)
		ra(a);
	if (size == 3)
	{
		highest_node = find_highest(*a);
		if (*a == highest_node)
			ra(a);
		else if ((*a)->next == highest_node)
			rra(a);
		if ((*a)->num > (*a)->next->num)
			sa(a);
	}
}

void sort_5(t_node **a, t_node **b)
{
	int i;
	int size;

	i = 0;
	size = get_stack_size(*a);
	while (i < size - 3)
	{
		if ((*a)->num == 0 || (*a)->num == 1)
			pb(a, b);
		else
			ra(a);
		i++;
	}
	sort_3(a, 3);
	while (*b)
	{
		if ((*b)->num == 0)
			pa(a, b);
		else
			rb(b);
	}
}