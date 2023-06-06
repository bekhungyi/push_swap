/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:41:32 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/06/06 15:45:55 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

// void	print_stack(t_node *a, t_node *b)
// {
// 	ft_printf("Stack A:\n");
// 	while (a)
// 	{
// 		ft_printf("%d\n ", a->num);
// 		a = a->next;
// 	}
// 	ft_printf("\nStack B: ");
// 	while (b)
// 	{
// 		ft_printf("%d\n", b->num);
// 		b = b->next;
// 	}
// 	ft_printf("\n");
// }

int	main(int ac, char **av)
{
	t_node	*a;
	t_node	*b;
	int		size;

	a = NULL;
	b = NULL;
	if (ac == 1 || av[1][0] == '\0')
	{
		write(2, "Error\n", 6);
		return (0);
	}
	else if (ac == 2)
		av = ft_split (av[1], ' ');
	stack_init (&a, av + 1);
	if (!check_sort(a))
	{
		size = get_stack_size(a);
		if (size <= 5)
			small_sort(&a, &b, size);
		else
			big_sort(&a, &b, size);
	}
	else
		ft_putstr ("Sorted.\n");
	return (1);
}
