/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:28:46 by sumseo            #+#    #+#             */
/*   Updated: 2023/12/26 15:28:47 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack_node **a)
{
	int	temp;
	int	i;

	i = 0;
	while ((*a)->next && i < 1)
	{
		temp = (*a)->value;
		(*a)->value = (*a)->next->value;
		(*a)->next->value = temp;
		i++;
	}
	while ((*a)->next)
	{
		printf("A : %d\n", (*a)->value);
		*a = (*a)->next;
	}
	printf("A : %d\n", (*a)->value);
}
void	sa(t_stack_node **a)
{
	printf("sa\n");
	swap(a);
}

void	sb(t_stack_node **b)
{
	printf("sb\n");
	swap(b);
}