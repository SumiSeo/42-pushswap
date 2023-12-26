/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:24:52 by sumseo            #+#    #+#             */
/*   Updated: 2023/12/26 15:24:53 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_stack_node **a, t_stack_node **b)
{
	int				temp;
	t_stack_node	*new_node;
	int				i;

	i = 0;
	if (b == NULL)
		return ;
	temp = (*b)->value;
	while ((*b)->next && i < 1)
	{
		prepend_stack(b, temp);
		printf("B : %d\n", (*b)->value);
		*b = (*b)->next;
		i++;
	}
}

void	pa(t_stack_node **a, t_stack_node **b)
{
	printf("pa\n");
	push(a, b);
}

void	pb(t_stack_node **a, t_stack_node **b)
{
	printf("pb\n");
	push(b, a);
}