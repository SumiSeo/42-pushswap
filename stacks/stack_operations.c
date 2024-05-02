/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:27:55 by sumseo            #+#    #+#             */
/*   Updated: 2024/05/02 01:46:35 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_stackremove_first_one(t_stack **stack)
{
	t_stack	*current;

	if (*stack == NULL)
		return ;
	else
	{
		current = *stack;
		*stack = current->next;
		free(current);
	}
}

void	ft_stackremove_one(t_stack **stack, int num)
{
	t_stack	*current;
	t_stack	*prev;

	current = *stack;
	prev = NULL;
	while (current != NULL)
	{
		if (current->data == num)
		{
			if (prev == NULL)
				*stack = current->next;
			else
				prev->next = current->next;
			free(current);
			return ;
		}
		prev = current;
		current = current->next;
	}
}

void	ft_stackremove_last_one(t_stack **stack)
{
	t_stack	*current;
	t_stack	*prev;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	current = *stack;
	prev = NULL;
	while (current->next != NULL)
	{
		prev = current;
		current = current->next;
	}
	free(current);
	if (prev != NULL)
		prev->next = NULL;
	else
		*stack = NULL;
}
