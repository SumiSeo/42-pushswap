/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:17:57 by sumseo            #+#    #+#             */
/*   Updated: 2024/05/12 01:42:05 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack **a)
{
	t_stack	*last_node;

	printf("ra\n");
	if (!*a || !(*a)->next)
		return ;
	last_node = ft_stack_last(*a);
	last_node->next = *a;
	*a = (*a)->next;
	(*a)->prev = NULL;
	last_node->next->prev = last_node;
	last_node->next->next = NULL;
}

void	rb(t_stack **b)
{
	t_stack	*last_node;

	printf("rb\n");
	if (!*b || !(*b)->next)
		return ;
	last_node = ft_stack_last(*b);
	last_node->next = *b;
	*b = (*b)->next;
	(*b)->prev = NULL;
	last_node->next->prev = last_node;
	last_node->next->next = NULL;
}

void	rr(t_stack **a, t_stack **b)
{
	ra(a);
	rb(b);
}

void	rotate_both(t_stack **a, t_stack **b, t_stack *cheapst_node)
{
	while (*b != cheapst_node->target_node && *a != cheapst_node)
		rr(a, b);
	current_index(*a);
	current_index(*b);
}