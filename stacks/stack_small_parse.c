/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_small_parse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:14:11 by sumseo            #+#    #+#             */
/*   Updated: 2024/04/19 15:35:39 by sumseo           ###   ########.fr       */
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

void	sort_small_stack(int stack_size, t_stack *a)
{
	(void)a;
	printf("Stack size :  %d\n", stack_size);
}