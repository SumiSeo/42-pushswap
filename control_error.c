/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:24:44 by sumseo            #+#    #+#             */
/*   Updated: 2024/04/21 16:39:12 by sumseo           ###   ########.fr       */
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