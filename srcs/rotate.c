/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 17:53:11 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/06/06 15:45:08 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_node **addr)
{
    t_node	*first_node;
    t_node	*last_node;

    if (*addr == NULL || (*addr)->next == NULL)
        return ;
    first_node = *addr;
    last_node = find_last_node(*addr);
    *addr = first_node->next;
    (*addr)->prev = NULL;
    last_node->next = first_node;
    first_node->prev = last_node;
    first_node->next = NULL;
}

void	ra(t_node **a)
{
	rotate(a);
	ft_putstr("ra\n");
}

void	rb(t_node **b)
{
	rotate(b);
	ft_putstr("rb\n");
}

void	rr(t_node **a, t_node **b)
{
	rotate(a);
	rotate(b);
	ft_putstr("rr\n");
}