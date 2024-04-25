/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_small_parse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:14:11 by sumseo            #+#    #+#             */
/*   Updated: 2024/04/25 20:59:06 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
t_stack	*sort_3_stack(t_stack **a)
{
	t_stack	*current;

	current = *a;
	if (current->data > current->next->data
		&& current->next->data > current->next->next->data)
		sort_3_stack_util(a, 2);
	else if (current->data < current->next->data
		&& current->next->next->data < current->next->data
		&& current->next->next->data < current->data)
		rra(a);
	else if (current->data > current->next->data
		&& current->next->data < current->next->next->data
		&& current->data < current->next->next->data)
		sa(a);
	else if (current->data > current->next->data
		&& current->next->data < current->next->next->data)
		ra(a);
	else if ((current->data < current->next->data
			&& current->next->data > current->next->next->data))
		sort_3_stack_util(a, 1);
	else if (current->data < current->next->data
		&& current->next->data > current->next->next->data)
		sort_3_stack_util(a, 1);
	return (*a);
}

t_stack	*sort_4_stack(t_stack **a, t_stack **b)
{
	pb(a, b);
	pb(a, b);
	print_stacks(*a, *b);
	// ss(a, b);
	// rr(a, b);
	print_stacks(*a, *b);
	rrr(a, b);
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
	print_stacks(*a, *b);
	printf("************************");
	if (stack_size == 3)
		sort_3_stack(a);
	else if (stack_size == 4)
		sort_4_stack(a, b);
	else
		sort_5_stack(a, b);
	print_stacks(*a, *b);
}