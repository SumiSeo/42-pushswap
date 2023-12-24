/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 17:09:21 by sumseo            #+#    #+#             */
/*   Updated: 2023/12/24 17:09:24 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*ft_stacknew(int value)
{
	t_stack_node	*head;

	head = (t_stack_node *)malloc(sizeof(*head));
	if (!head)
		return (NULL);
	head->value = value;
	head->next = NULL;
	return (head);
}

void	ft_stackadd_front(t_stack_node **stack, t_stack_node *new)
{
	if (*stack == NULL)
		*stack = new;
	else
	{
		new->next = *stack;
		*stack = new;
	}
}
t_stack_node	*ft_stacklast(t_stack_node *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next != NULL)
		stack = stack->next;
	return (stack);
}