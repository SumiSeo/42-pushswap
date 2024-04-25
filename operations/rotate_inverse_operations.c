/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_inverse_operations.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 20:02:14 by sumseo            #+#    #+#             */
/*   Updated: 2024/04/25 17:34:17 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack **a)
{
	int	last_data;

	printf("rra CALLED\n");
	while (!a || !(*a) || !(*a)->next)
		return ;
	if (*a)
	{
		last_data = ft_stack_last(*a)->data;
		ft_stackadd_front(a, ft_stack_new(last_data));
	}
	ft_stackremove_last_one(a);
}

void	rrb(t_stack **b)
{
	int	last_data;

	printf("rrb CALLED\n");
	while (!b || !(*b) || !(*b)->next)
		return ;
	if (*b)
	{
		last_data = ft_stack_last(*b)->data;
		ft_stackadd_front(b, ft_stack_new(last_data));
	}
	ft_stackremove_last_one(b);
}

void	rrr(t_stack **a, t_stack **b)
{
	printf("rrr CALLED\n");
	(void)b;
	(void)a;
}
