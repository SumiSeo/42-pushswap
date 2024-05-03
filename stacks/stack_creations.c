/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_creations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:47:57 by sumseo            #+#    #+#             */
/*   Updated: 2024/05/02 02:08:55 by sumseo           ###   ########.fr       */
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
	// head->equivalent_data = 1;
	head->next = NULL;
	return (head);
}
t_stack	*ft_stack_new_equiv(int data, int equiv)
{
	t_stack	*head;

	head = (t_stack *)malloc(sizeof(t_stack));
	if (!head)
		return (NULL);
	head->data = data;
	head->equivalent_data = equiv + 1;
	head->next = NULL;
	return (head);
}

void	ft_stackadd_back(t_stack **stack, t_stack *new)
{
	t_stack	*last;
	t_stack	*tmp;
	int		min;
	t_stack	*current;

	tmp = *stack;
	if (*stack == NULL)
		*stack = new;
	else
	{
		last = *stack;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	min = (*stack)->data;
	current = *stack;
	while (current != NULL)
	{
		if (current->data < min)
			min = current->data;
		current = current->next;
	}
	current = *stack;
	while (current != NULL)
	{
		current->equivalent_data = current->data - min;
		current = current->next;
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

void	ft_stackadd_check(t_stack **stack, int data)
{
	(void)stack;
	(void)data;
}

// void	ft_stackadd_back(t_stack **stack, t_stack *new)
// {
// 	t_stack	*last;

// 	if (*stack == NULL)
// 		*stack = new;
// 	else
// 	{
// 		last = *stack;
// 		while (last->next != NULL)
// 		{
// 			printf("Check %d\n", last->data);
// 			last = last->next;
// 		}
// 		last->next = new;
// 	}
// }