/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_parse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:20:22 by sumseo            #+#    #+#             */
/*   Updated: 2024/05/03 14:11:02 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_3_stack_util(t_stack **a, int check)
{
	if (check == 1)
	{
		ra(a);
		sa(a);
		rra(a);
	}
	else
	{
		sa(a);
		rra(a);
	}
}

t_stack	*sort_3_stack(t_stack **a)
{
	t_stack	*current;

	current = *a;
	if (current->data > current->next->data
		&& current->next->data > current->next->next->data)
		sort_3_stack_util(a, 2);
	else if (current->data < current->next->data
		&& current->next->next->data < current->next->data
		&& current->next->next->data < current->data)
		rra(a);
	else if (current->data > current->next->data
		&& current->next->data < current->next->next->data
		&& current->data < current->next->next->data)
		sa(a);
	else if (current->data > current->next->data
		&& current->next->data < current->next->next->data)
		ra(a);
	else if ((current->data < current->next->data
			&& current->next->data > current->next->next->data))
		sort_3_stack_util(a, 1);
	else if (current->data < current->next->data
		&& current->next->data > current->next->next->data)
		sort_3_stack_util(a, 1);
	return (*a);
}
