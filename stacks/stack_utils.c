/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:33:37 by sumseo            #+#    #+#             */
/*   Updated: 2024/05/12 00:11:00 by sumseo           ###   ########.fr       */
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
	while (stack->next)
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
		if ((*a)->prev)
			printf(", prev: %d\n", (*a)->prev->data);
		else
			printf(", prev: NULL\n");
		*a = (*a)->next;
	}
	printf("***********************\n");
}

void	print_stacks(t_stack **a, char c)
{
	t_stack	*current_a;

	printf("***********************\n");
	current_a = *a;
	while ((a && (*a)))
	{
		if ((*a)->data)
		{
			printf("%d    ", (*a)->data);
		}
		else if ((*a)->data == 0)
		{
			printf("%c   ", '0');
		}
		else
		{
			printf("     ");
		}
		*a = (*a)->next;
		printf("\n");
	}
	printf("__ \n");
	printf("%c\n\n", c);
}
