/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:24:17 by sumseo            #+#    #+#             */
/*   Updated: 2023/12/26 15:24:21 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_stack(t_stack_node **a, char **argv)
{
	int				i;
	long			nbr;
	t_stack_node	*b;

	b = NULL;
	i = 0;
	while (argv[i])
	{
		nbr = ft_atoi(argv[i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			printf("error");
		append_stack(a, (int)nbr);
		i++;
	}
	sa(a);
	printf("NEXT\n");
	pb(a, &b);
}
