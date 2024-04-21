/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:17:50 by sumseo            #+#    #+#             */
/*   Updated: 2024/04/21 20:02:41 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack **a)
{
	int	tmp_data;

	printf("sa CALLED\n");
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

	printf("sb CALLED\n");
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
	sa(a);
	sb(b);
}