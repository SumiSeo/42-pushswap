/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:24:44 by sumseo            #+#    #+#             */
/*   Updated: 2024/04/21 21:15:19 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exit_program(char **array, char *err_msg)
{
	if (array)
	{
		free_array(array);
	}
	printf("%s", err_msg);
	exit(EXIT_FAILURE);
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
			printf("%d    ", a->data);
			a = a->next;
		}
		else
			printf("     ");
		if (b && b->data)
		{
			printf("%d    ", b->data);
			b = b->next;
		}
		else
			printf("     ");
		printf("\n");
	}
	printf("__  __\n");
	printf("a   b\n\n");
}
