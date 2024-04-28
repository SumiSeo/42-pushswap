/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:18:04 by sumseo            #+#    #+#             */
/*   Updated: 2024/04/28 17:01:11 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stack **a, t_stack **b)
{
	int		b_data;
	t_stack	*head;

	printf("pa\n");
	while (!b || !(*b))
		return ;
	if (*b)
	{
		b_data = (*b)->data;
		head = ft_stack_new(b_data);
		ft_stackadd_front(a, head);
		ft_stackremove_first_one(b);
	}
}

void	pb(t_stack **a, t_stack **b)
{
	int		a_data;
	t_stack	*head;

	printf("pb\n");
	while (!a || !(*a))
		return ;
	if (*a)
	{
		a_data = (*a)->data;
		head = ft_stack_new(a_data);
		ft_stackadd_front(b, head);
		ft_stackremove_first_one(a);
	}
}
