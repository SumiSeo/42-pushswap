/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_big_parse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:31:18 by sumseo            #+#    #+#             */
/*   Updated: 2024/05/01 16:34:48 by sumseo           ###   ########.fr       */
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

int	compare_and_swap(int data1, int data2)
{
	if (data1 > data2)
		return (0);
	return (1);
}

void	assign_radix_index(int stack_size, t_stack **a)
{
	t_stack	*temp;
	int		swap_data;

	temp = *a;
	printf("STACK SIZE %d\n", stack_size);
	while (temp && temp->next)
	{
		printf("temp %d\n", temp->data);
		if (compare_and_swap(temp->data, temp->next->data))
		{
			swap_data = temp->next->data;
			temp->next->data = temp->data;
			temp->data = swap_data;
			printf("Swapped\n");
		}
		else
			break ;
		temp = temp->next;
	}
}

void	sort_big_stack(int stack_size, t_stack **a, t_stack **b)
{
	int	max_num;
	int	bit_max;

	max_num = stack_size - 1;
	bit_max = 0;
	// sort_list(a);
	// assign_radix_index(stack_size, a);
	(void)b;
	(void)a;
	// while (max_num >> bit_max != 0)
	// {
	// 	push_last_bit_one(a, b, stack_size, bit_max);
	// 	empty_b(a, b);
	// 	bit_max++;
	// }
}
