/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_small_parse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:14:11 by sumseo            #+#    #+#             */
/*   Updated: 2024/04/25 17:33:24 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool	is_stack_ordered(t_stack *a)
{
	t_stack	*current;
	int		nextData;
	int		currentData;

	if (a == NULL)
		return (true);
	current = a;
	while (current->next != NULL)
	{
		currentData = current->data;
		nextData = current->next->data;
		if (currentData >= nextData)
			return (false);
		current = current->next;
	}
	return (true);
}

t_stack	*sort_3_stack(t_stack **a, t_stack **b)
{
	// t_stack	*current;
	pb(a, b);
	pb(a, b);
	print_stacks(*a, *b);
	ss(a, b);
	print_stacks(*a, *b);
	// print_stack(a);
	// print_stack(b);
	// printf("%d\n", (*b)->next->next->data);
	// print_stacks(a, b);
	// sb(&b);
	// print_stacks(a, b);
	// pa(a, b);
	// while (a)
	// {
	// 	// 743 734 347 374 437 473
	// 	current = a;
	// 	// 743
	// 	if (current->data > current->next->data
	// 		&& current->next->data > current->next->next->data)
	// 	{
	// 		// find correct condition by comparing all ifs
	// 		rra(a, b);
	// 	}
	// 	else if (current->data > current->next->data
	// 		&& current->next->data < current->next->next->data)
	// 	{
	// 		//
	// 	}
	// 	//	ra(current->data, current->next->data);
	// 	// else if()f
	// 	a = a->next;
	// }
	return (*a);
}

t_stack	*sort_4_stack(t_stack **a, t_stack **b)
{
	pb(a, b);
	pb(a, b);
	print_stacks(*a, *b);
	// ss(a, b);
	rr(a, b);
	print_stacks(*a, *b);
	rra(a);
	print_stacks(*a, *b);
	return (*a);
}

t_stack	*sort_5_stack(t_stack **a, t_stack **b)
{
	(void)a;
	(void)b;
	return (*a);
}
void	sort_small_stack(int stack_size, t_stack **a, t_stack **b)
{
	if (stack_size == 3)
		sort_3_stack(a, b);
	else if (stack_size == 4)
		sort_4_stack(a, b);
	else
		sort_5_stack(a, b);
}