/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_small_parse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:14:11 by sumseo            #+#    #+#             */
/*   Updated: 2024/04/19 17:49:29 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool	is_stack_ordered(t_stack *a)
{
	t_stack	*current;
	int		nextData;
	int		currentData;

	if (a == NULL)
		return (true);
	current = a;
	while (current->next != NULL)
	{
		currentData = current->data;
		nextData = current->next->data;
		if (currentData >= nextData)
			return (false);
		current = current->next;
	}
	return (true);
}

t_stack	*sort_3_stack(t_stack *a, t_stack *b)
{
	(void)a;
	pa(a, b);
	return (a);
}

t_stack	*sort_4_stack(t_stack *a, t_stack *b)
{
	(void)a;
	return (a);
}

t_stack	*sort_5_stack(t_stack *a, t_stack *b)
{
	(void)a;
	return (a);
}
void	sort_small_stack(int stack_size, t_stack *a, t_stack *b)
{
	printf("Stack size :  %d\n", stack_size);
	if (stack_size == 3)
		sort_3_stack(a, b);
	else if (stack_size == 4)
		sort_4_stack(a, b);
	else
		sort_5_stack(a, b);
}