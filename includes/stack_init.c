/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:00:00 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/06/05 02:37:00 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	stack_init(t_node **a, char **av)
{
	long	num;
	int		i;

	i = 0;
	while (av[i])
	{
		if (!check_num(av[i]))
			free_stack(a, av);
		num = ft_atoi(av[i]);
		if (num > INT_MAX || num < INT_MIN)
			free_stack(a, av);
		if (check_dup(*a, (int)num))
			free_stack(a, av);
		make_node(a, (int)num);
		i++;
	}
}