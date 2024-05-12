/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:17:57 by sumseo            #+#    #+#             */
/*   Updated: 2024/05/12 02:03:22 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_stack **src)
{
	t_stack	*last_node;

	if (!*src || !(*src)->next)
		return ;
	last_node = ft_stack_last(*src);
	last_node->next = *src;
	*src = (*src)->next;
	(*src)->prev = NULL;
	last_node->next->prev = last_node;
	last_node->next->next = NULL;
}

void	ra(t_stack **a)
{
	rotate(a);
	printf("ra\n");
}

void	rb(t_stack **b)
{
	rotate(b);
	printf("rb\n");
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	printf("rr\n");
}

void	rotate_both(t_stack **a, t_stack **b, t_stack *cheapst_node)
{
	while (*b != cheapst_node->target_node && *a != cheapst_node)
		rr(a, b);
	current_index(*a);
	current_index(*b);
}