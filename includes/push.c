/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 19:24:45 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/06/05 01:42:21 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_node **a, t_node **b)
{
	t_node	*first_node;
	t_node	*second_node;

	if (*a == NULL)
		return ;
	first_node = *a;
	second_node = *b;
	*a = first_node->next;
	if (*a != NULL)
		(*a)->prev = NULL;
	*b = first_node;
	first_node->prev = NULL;
	first_node->next = second_node;
	if (second_node != NULL)
		second_node->prev = first_node;
}

void	pa(t_node **a, t_node **b)
{
	push(b, a);
	ft_printf("pa\n");
}

void	pb(t_node **a, t_node **b)
{
	push(a, b);
	ft_printf("pb\n");
}
