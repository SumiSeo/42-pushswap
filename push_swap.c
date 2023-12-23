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
	int				i;
	t_stack_node	*a;

	a = NULL;
	i = 0;
	if (argc < 1 || (argc >= 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
	{
		// push_swap(argv[1]);
		argv = ft_split(argv[1], ' ');
		while (argv[i])
		{
			printf("argv : %s\n", argv[i]);
			i++;
		}
	}
	else
		create_stack(a, argv + 1, argc == 2);
	// else
	// {
	// 	i = 1;
	// 	while (argv[i])
	// 	{
	// 		printf("original argv %s\n", argv[i]);
	// 		i++;
	// 	}
	// }
	return (1);
}
