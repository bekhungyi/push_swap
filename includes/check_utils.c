/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 18:12:20 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/06/05 01:18:33 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node *find_highest(t_node *a)
{
    int 	highest;
	t_node *highest_node;

	highest = a->num;
	highest_node = a;
	while (a)
	{
		if (a->num > highest)
		{
			highest = a->num;
			highest_node = a;
		}
		a = a->next;
	}
    return (highest_node);
}

t_node *find_lowest(t_node *a)
{
    int 	lowest;
	t_node *lowest_node;

	lowest = a->num;
	lowest_node = a;
	while (a)
	{
		if (a->num < lowest)
		{
			lowest = a->num;
			lowest_node = a;
		}
		a = a->next;
	}
    return (lowest_node);
}
