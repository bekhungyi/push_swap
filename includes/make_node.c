/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 16:01:50 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/06/02 17:08:56 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*find_last_node(t_node *addr)
{
	while (addr->next)
		addr = addr->next;
	return (addr);
}

void	make_node(t_node **a, int num)
{
	t_node	*current_node;
	t_node	*last_node;

	current_node = malloc(sizeof(t_node));
	if (current_node == NULL)
		return ;
	current_node->num = num;
	current_node->next = NULL;
	if (*a == NULL)
	{
		*a = current_node;
		current_node->prev = NULL;
	}
	else
	{
		last_node = find_last_node(*a);
		current_node->prev = last_node;
		last_node->next = current_node;
	}
}