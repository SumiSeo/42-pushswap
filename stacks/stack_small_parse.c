/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_small_parse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:14:11 by sumseo            #+#    #+#             */
/*   Updated: 2024/04/28 17:28:27 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_min_stack(t_stack **a)
{
	int		min;
	int		current;
	t_stack	*temp;

	temp = *a;
	min = temp->data;
	while (temp)
	{
		current = (temp)->data;
		if (current < min)
			min = current;
		temp = temp->next;
	}
	return (min);
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
	int		min;
	t_stack	*temp;

	temp = *a;
	min = find_min_stack(a);
	while (temp)
	{
		if (temp->data == min)
		{
			ft_stackadd_front(b, ft_stack_new(temp->data));
			ft_stackremove_one(a, min);
			sort_3_stack(a);
			pa(a, b);
			break ;
		}
		temp = temp->next;
	}
	return (*a);
}
void	sort_5_stack_util(t_stack **a, t_stack **b)
{
	sort_3_stack(a);
	pa(a, b);
	pa(a, b);
}

t_stack	*sort_5_stack(t_stack **a, t_stack **b)
{
	t_stack	*temp;
	t_stack	*second_temp;

	second_temp = *a;
	temp = *a;
	while (temp)
	{
		if (temp->data == find_min_stack(a))
		{
			ft_stackadd_front(b, ft_stack_new(temp->data));
			ft_stackremove_one(a, find_min_stack(a));
			break ;
		}
		temp = temp->next;
	}
	while (second_temp)
	{
		if (second_temp->data == find_min_stack(a))
		{
			ft_stackadd_front(b, ft_stack_new(second_temp->data));
			ft_stackremove_one(a, find_min_stack(a));
			sort_5_stack_util(a, b);
			break ;
		}
		second_temp = second_temp->next;
	}
	return (*a);
}

void	sort_small_stack(int stack_size, t_stack **a, t_stack **b)
{
	print_stacks(*a, *b);
	printf("************************\n");
	if (stack_size == 3)
		sort_3_stack(a);
	else if (stack_size == 4)
		sort_4_stack(a, b);
	else
		sort_5_stack(a, b);
	print_stacks(*a, *b);
}
