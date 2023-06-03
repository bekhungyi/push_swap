/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 23:55:56 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/06/03 19:32:57 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_3(t_node **a, int size)
{
	if (size == 2)
		ra(a);
	if (size == 3)
	{
		while (check_sort(*a) == 0)
		{
			if ((*a)->num > (*a)->next->num)
				ra(a);
			else
				sa(a);
		}
	}
}

void	sort_5(t_node **a, t_node **b)
{
	int	i;
	int	size;

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