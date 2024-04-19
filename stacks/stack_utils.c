/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:33:37 by sumseo            #+#    #+#             */
/*   Updated: 2024/04/19 14:12:20 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_stack_size(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack != NULL)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}

void	print_stack(t_stack *a)
{
	printf("***********************\n");
	while (a)
	{
		printf("current a: %d", a->data);
		if (a->next)
			printf(", next: %d", a->next->data);
		else
			printf(", next: NULL");
		if (a->prev)
			printf(", prev: %d\n", a->prev->data);
		else
			printf(", prev: NULL\n");
		a = a->next;
	}
	printf("***********************\n");
}

void	free_array(char **line)
{
	int	i;

	i = 0;
	while (line[i])
	{
		free(line[i]);
		i++;
	}
	free(line);
}

void	ft_stack_free(char **line)
{
	int	i;

	i = 0;
	while (line[i])
	{
		free(line[i]);
		i++;
	}
	free(line);
}

t_stack	*ft_stack_new(int data)
{
	t_stack	*head;

	head = (t_stack *)malloc(sizeof(t_stack));
	if (!head)
		return (NULL);
	head->data = data;
	head->prev = NULL;
	head->next = NULL;
	return (head);
}

void	ft_stackadd_back(t_stack **stack, t_stack *new)
{
	t_stack		*last;

	if (*stack == NULL)
		*stack = new;
	else
	{
		last = *stack;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
		new->prev = last;
	}
}
