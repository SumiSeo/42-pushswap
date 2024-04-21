/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:18:04 by sumseo            #+#    #+#             */
/*   Updated: 2024/04/21 17:02:43 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	int		b_data;
	t_stack	*head;

	printf("PA CALLED\n");
	while (!b)
		return ;
	if (b)
	{
		b_data = b->data;
		head = ft_stack_new(b_data);
		ft_stackadd_front(&a, head);
		ft_stackremove_one(&b);
	}
	printf("STACK A ***** \n");
	print_stack(a);
	printf("STACK B ***** \n");
	print_stack(b);
}
void	pb(t_stack *a, t_stack *b)
{
	int a_data;
	t_stack *head;

	printf("PB CALLED\n");
	while (!a)
		return ;
	if (a)
	{
		a_data = a->data;
		head = ft_stack_new(a_data);
		ft_stackadd_front(&b, head);
		ft_stackremove_one(&a);
	}

	printf("STACK A ***** \n");
	print_stack(a);
	printf("STACK B ***** \n");
	print_stack(b);
}