/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:06:16 by sumseo            #+#    #+#             */
/*   Updated: 2023/12/23 17:59:06 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_swap(char *num_list)
{
	printf("num list: %s\n", num_list);
	return (2);
}
int	main(int argc, char *argv[])
{
	t_stack_node	*a;
	bool			is_error;

	is_error = false;
	a = malloc((sizeof(a)));
	if (argc <= 1 || (argc >= 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		is_error = create_stack(&a, argv);
	}
	else
		is_error = create_stack(&a, argv + 1);
	if (is_error == 0)
	{
		printf("error occured");
	}
	// free(a);
	return (1);
}
