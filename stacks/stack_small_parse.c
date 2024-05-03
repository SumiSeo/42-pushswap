/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_small_parse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:14:11 by sumseo            #+#    #+#             */
/*   Updated: 2024/05/03 14:21:34 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_small_stack(int stack_size, t_stack **a, t_stack **b)
{
	if (stack_size == 3)
		sort_3_stack(a);
	else if (stack_size == 4)
		sort_4_stack(a, b);
	else
		sort_5_stack(a, b);
}

bool	is_stack_ordered(t_stack *a)
{
	t_stack *current;
	int next_data;
	int current_data;

	if (a == NULL)
		return (true);
	current = a;
	while (current->next != NULL)
	{
		current_data = current->data;
		next_data = current->next->data;
		if (current_data >= next_data)
			return (false);
		current = current->next;
	}
	return (true);
}