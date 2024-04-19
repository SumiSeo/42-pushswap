/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:18:04 by sumseo            #+#    #+#             */
/*   Updated: 2024/04/19 19:43:11 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	printf("pa\n");
	(void)b;
	print_stack(a);
}
void	pb(t_stack *a, t_stack *b)
{
	printf("pb\n");
	(void)b;
	print_stack(a);
}