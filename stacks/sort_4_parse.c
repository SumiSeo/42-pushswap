/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4_parse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:20:44 by sumseo            #+#    #+#             */
/*   Updated: 2024/05/01 16:34:00 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*sort_4_stack(t_stack **a, t_stack **b)
{
	int     min;
	t_stack *temp;

	temp = *a;
	min = find_min_stack(a);
	while (temp)
	{
		if (temp->data == min)
		{
			ft_stackadd_front(b, ft_stack_new(temp->data));
			ft_stackremove_one(a, min);
			sort_3_stack(a);
			pa(a, b);
			break ;
		}
		temp = temp->next;
	}
	return (*a);
}
