/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:33:37 by sumseo            #+#    #+#             */
/*   Updated: 2024/05/01 16:37:40 by sumseo           ###   ########.fr       */
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

t_stack	*ft_stack_last(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next != NULL)
		stack = stack->next;
	return (stack);
}

void	print_stack(t_stack **a)
{
	printf("***********************\n");
	while (a && (*a))
	{
		printf("current value: %d", (*a)->data);
		if ((*a)->next)
			printf(", next: %d\n", (*a)->next->data);
		else
			printf(", next: NULL\n");
		*a = (*a)->next;
	}
	printf("***********************\n");
}

void	print_stacks(t_stack *a, t_stack *b)
{
	printf("***********************\n");
	while (a || b)
	{
		if (a && a->data)
		{
			printf("%d(%d)    ", a->data, a->equivalent_data);
			a = a->next;
		}
		else
			printf("     ");
		if (b && b->data)
		{
			printf("%d(%d)    ", b->data, b->equivalent_data);
			b = b->next;
		}
		else
			printf("     ");
		printf("\n");
	}
	printf("__  __\n");
	printf("a   b\n\n");
}
