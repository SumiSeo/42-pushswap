/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_big_parse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:31:18 by sumseo            #+#    #+#             */
/*   Updated: 2024/04/28 18:49:32 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_min_stack(t_stack **a)
{
	int		min;
	int		current;
	t_stack	*temp;

	temp = *a;
	min = temp->data;
	while (temp)
	{
		current = (temp)->data;
		if (current < min)
			min = current;
		temp = temp->next;
	}
	return (min);
}

void	sort_big_stack(int stack_size, t_stack **a, t_stack **b)
{
	(void)a;
	(void)b;
	printf("Stack size %d\n", stack_size);
}
