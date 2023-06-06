/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 23:55:56 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/06/05 15:47:17 by bhung-yi         ###   ########.fr       */
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
	if (!check_sort(*a))
	{
		ra(a);
		if (*b)
			pa(a, b);
	}
	else if (*b)
	{
		pa(a, b);
		ra(a);
	}
}

void	small_sort(t_node **a, t_node **b, int size)
{
	if (size == 2 || size == 3)
		sort_3(a, size);
	else if (size == 4 || size == 5)
		sort_5(a, b, size);
}