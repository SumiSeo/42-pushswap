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
	while (argc < 1)
	{
		printf("no arguments passed");
	}
	if (argv[1])
	{
		push_swap(argv[1]);
	}
	return (1);
}
