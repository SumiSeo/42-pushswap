/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4_parse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 00:51:17 by sumseo            #+#    #+#             */
/*   Updated: 2024/05/12 01:21:22 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_4_stack(t_stack **stack, t_stack **b)
{
	t_stack	*current;
	t_stack	*prev;
	t_stack	*min_node;

	if (!stack || !*stack)
		return ;
	min_node = find_min_stack(*stack);
	ft_stackadd_back(b, min_node->data);
	current = *stack;
	prev = NULL;
	while (current)
	{
		if (current->data == min_node->data)
		{
			ft_stack_remove_one(stack, min_node->data);
			break ; // exit loop once the min_node is removed
		}
		prev = current;
		current = current->next;
	}
	sort_small_stack(3, stack);
}
void	ft_stack_remove_one(t_stack **stack, int data)
{
	t_stack *current;
	t_stack *prev;
	if (!stack || !*stack)
		return ;
	current = *stack;
	prev = NULL;

	while (current)
	{
		if (current->data == data)
		{
			if (prev) // If the node to be removed is not the first node
				prev->next = current->next;
			else // If the node to be removed is the first node
				*stack = current->next;
			free(current);
			return ;
		}
		prev = current;
		current = current->next;
	}
}