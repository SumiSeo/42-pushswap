/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_parse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:29:00 by sumseo            #+#    #+#             */
/*   Updated: 2024/05/01 16:32:59 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_5_stack_util(t_stack **a, t_stack **b)
{
	sort_3_stack(a);
	pa(a, b);
	pa(a, b);
}

t_stack	*sort_5_stack(t_stack **a, t_stack **b)
{
	t_stack     *temp;
	t_stack      *second_temp;

	second_temp = *a;
	temp = *a;
	while (temp)
	{
		if (temp->data == find_min_stack(a))
		{
			ft_stackadd_front(b, ft_stack_new(temp->data));
			ft_stackremove_one(a, find_min_stack(a));
			break ;
		}
		temp = temp->next;
	}
	while (second_temp)
	{
		if (second_temp->data == find_min_stack(a))
		{
			ft_stackadd_front(b, ft_stack_new(second_temp->data));
			ft_stackremove_one(a, find_min_stack(a));
			sort_5_stack_util(a, b);
			break ;
		}
		second_temp = second_temp->next;
	}
	return (*a);
}
