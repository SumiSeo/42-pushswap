/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_small_parse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:14:11 by sumseo            #+#    #+#             */
/*   Updated: 2024/05/12 20:41:52 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_small_stack(int stack_size, t_stack **a)
{
	if (stack_size == 3)
		sort_3_stack(a);
}

bool	is_stack_ordered(t_stack *a)
{
	t_stack	*current;
	int		next_data;
	int		current_data;

	if (a == NULL)
		return (true);
	current = a;
	while (current->next != NULL)
	{
		current_data = current->data;
		next_data = current->next->data;
		if (current_data >= next_data)
			return (false);
		current = current->next;
	}
	return (true);
}

t_stack	*check_arg_is_range(int i, int point, t_stack *a, char **converted_argv)
{
	int		converted_int;

	converted_int = ft_atoi(converted_argv[i], &point);
	if (point == 2)
		exit_program(converted_argv, "Arugment is out of range");
	ft_stackadd_back(&a, converted_int);
	return (a);
}
