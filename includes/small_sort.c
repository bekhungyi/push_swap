/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 23:55:56 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/06/05 02:59:08 by bhung-yi         ###   ########.fr       */
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

void sort_5(t_node **a, t_node **b, int size)
{
	int i;
	t_node *lowest_node;
	t_node *highest_node;

	lowest_node = find_lowest(*a);
	highest_node = find_highest(*a);
	while (size > 3)
	{	
		if ((*a)->num == lowest_node->num || (*a)->num == highest_node->num)
		{
			pb(a, b);
			size--;
		}
		else
			ra(a);
	}
	sort_3(a, 3);
	pa(a, b);
	if (!check_sort(*a) && *b)
	{
		ra(a);
		pa(a, b);
	}
	else if (*b)
	{
		pa(a, b);
		ra(a);
	}
}