/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_parse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:20:22 by sumseo            #+#    #+#             */
/*   Updated: 2024/05/11 22:31:00 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_3_stack_util(t_stack **a, int check)
{
	if (check == 1)
	{
		ra(a);
		sa(a);
		rra(a);
	}
	else
	{
		sa(a);
		rra(a);
	}
}

void	sort_3_stack(t_stack **a)
{
	t_stack	*biggest_node;

	biggest_node = find_max_stack(*a);
	if (biggest_node == *a)
		ra(a);
	else if ((*a)->next == biggest_node)
		rra(a);
	if ((*a)->data > (*a)->next->data)
		sa(a);
}

// t_stack	*find_max_stack(t_stack *stack)
// {
// 	long max;
// 	t_stack *max_node;

// 	if (!stack)
// 		return (NULL);
// 	max = LONG_MIN;
// 	while (stack)
// 	{
// 		if (stack->data > max)
// 		{
// 			max = stack->data;
// 			max_node = stack;
// 		}
// 		stack = stack->next;
// 	}
// 	return (max_node);
// }