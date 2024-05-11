/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_inverse_operations.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 20:02:14 by sumseo            #+#    #+#             */
/*   Updated: 2024/05/11 23:46:57 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack **a)
{
	t_stack	*last_node;

	printf("rra\n");
	while (!a || !(*a)->next)
		return ;
	last_node = ft_stack_last(*a);
	last_node->prev->next = NULL;
	last_node->prev = *a;
	last_node->prev = NULL;
	*a = last_node;
	last_node->next->prev = last_node;
}

void	rrb(t_stack **b)
{
	t_stack	*last_node;

	printf("rrb\n");
	while (!b || !(*b)->next)
		return ;
	last_node = ft_stack_last(*b);
	last_node->prev->next = NULL;
	last_node->prev = *b;
	last_node->prev = NULL;
	*b = last_node;
	last_node->next->prev = last_node;
}

void	rrr(t_stack **a, t_stack **b)
{
	rra(a);
	rrb(b);
}
void	rev_rotate_both(t_stack **a, t_stack **b, t_stack *cheapest_node)
{
	while (*b != cheapest_node->target_node && *a != cheapest_node)
		rrr(a, b);
	current_index(*a);
	current_index(*b);
}
