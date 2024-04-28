/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:27:55 by sumseo            #+#    #+#             */
/*   Updated: 2024/04/28 17:13:47 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_stack_new(int data)
{
	t_stack	*head;

	head = (t_stack *)malloc(sizeof(t_stack));
	if (!head)
		return (NULL);
	head->data = data;
	head->next = NULL;
	return (head);
}

void	ft_stackadd_back(t_stack **stack, t_stack *new)
{
	t_stack	*last;

	if (*stack == NULL)
		*stack = new;
	else
	{
		last = *stack;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
}

void	ft_stackadd_front(t_stack **stack, t_stack *new)
{
	if (*stack == NULL)
		*stack = new;
	else
	{
		new->next = *stack;
		*stack = new;
	}
}

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
			printf("Found match: num = %d\n", num);
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
