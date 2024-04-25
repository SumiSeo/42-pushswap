/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:17:57 by sumseo            #+#    #+#             */
/*   Updated: 2024/04/25 16:27:06 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack **a)
{
	int	head_data;

	printf("ra\n");
	while (!a || !(*a) || !(*a)->next)
		return ;
	if (*a)
	{
		head_data = (*a)->data;
		ft_stackadd_back(a, ft_stack_new(head_data));
	}
	*a = (*a)->next;
}
void	rb(t_stack **b)
{
	int	head_data;

	printf("rb\n");
	while (!b || !(*b) || !(*b)->next)
		return ;
	if (*b)
	{
		head_data = (*b)->data;
		ft_stackadd_back(b, ft_stack_new(head_data));
	}
	*b = (*b)->next;
}

void	rr(t_stack **a, t_stack **b)
{
	int a_data;
	int b_data;

	printf("ra\n");
	while (!a || !(*a) || !(*a)->next)
		return ;
	if (*a)
	{
		a_data = (*a)->data;
		ft_stackadd_back(a, ft_stack_new(a_data));
	}
	*a = (*a)->next;

	while (!b || !(*b) || !(*b)->next)
		return ;
	if (*b)
	{
		b_data = (*b)->data;
		ft_stackadd_back(b, ft_stack_new(b_data));
	}
	*b = (*b)->next;
}