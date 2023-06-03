/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 18:23:51 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/06/03 18:32:01 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    swap(t_node **addr)
{
	t_node	*first_node;
	t_node	*second_node;
	t_node	*third_node;

	if (*addr == NULL || (*addr)->next == NULL)
		return ;
	first_node = *addr;
	second_node = first_node->next;
	third_node = second_node->next;
	*addr = second_node;
	second_node->prev = NULL;
	second_node->next = first_node;
	first_node->prev = second_node;
	first_node->next = third_node;
	third_node->prev = first_node;
}

void	sa(t_node **a)
{
	swap(a);
	ft_printf("sa\n");
}

void	sb(t_node **b)
{
	swap(b);
	ft_printf("sb\n");
}

void	ss(t_node **a, t_node **b)
{
	swap(a);
	swap(b);
	ft_printf("ss\n");
}