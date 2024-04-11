/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:06:16 by sumseo            #+#    #+#             */
/*   Updated: 2024/04/11 20:09:56 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	i;

	(void)argc;
	(void)argv;
	if (argc < 3)
		exit_program("Wrong argument number!");
	i = 1;
	while (argv[i])
	{
		if (ft_isalpha(argv[i]))
			printf("It is only number");
		i++;
	}
	// t_stack_node	*a;
	// a = NULL;
	// if (argc == 1 || (argc == 2 && !argv[1][0]))
	// 	return (1);
	// else if (argc == 2)
	// {
	// 	argv = ft_split(argv[1], ' ');
	// 	create_stack(&a, argv);
	// }
	// else
	// 	create_stack(&a, argv + 1);
	// test
	// return (1);
}
