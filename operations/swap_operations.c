/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:17:50 by sumseo            #+#    #+#             */
/*   Updated: 2024/04/26 11:47:26 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack **a)
{
	int	tmp_data;

	printf("sa\n");
	if (!a || !(*a) || !(*a)->next)
		return ;
	if (a)
	{
		tmp_data = (*a)->data;
		(*a)->data = (*a)->next->data;
		(*a)->next->data = tmp_data;
	}
}

void	sb(t_stack **b)
{
	int	tmp_data;

	printf("sb\n");
	if (!b || !(*b) || !(*b)->next)
		return ;
	if (b)
	{
		tmp_data = (*b)->data;
		(*b)->data = (*b)->next->data;
		(*b)->next->data = tmp_data;
	}
}

void	ss(t_stack **a, t_stack **b)
{
	int	tmp_data;
	int	tmp_data2;

	printf("ss\n");
	if (!a || !(*a) || !(*a)->next)
		return ;
	if (a)
	{
		tmp_data = (*a)->data;
		(*a)->data = (*a)->next->data;
		(*a)->next->data = tmp_data;
	}
	if (!b || !(*b) || !(*b)->next)
		return ;
	if (b)
	{
		tmp_data2 = (*b)->data;
		(*b)->data = (*b)->next->data;
		(*b)->next->data = tmp_data2;
	}
}
