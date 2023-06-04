/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 18:12:20 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/06/04 18:19:26 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node *find_highest(t_node *a)
{
    if (a->num > a->next->num && a->num > a->next->next->num)
        return (a);
    else if (a->next->num > a->num && a->next->num > a->next->next->num)
        return (a->next);
    else
        return (a->next->next);
}