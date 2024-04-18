/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:06:16 by sumseo            #+#    #+#             */
/*   Updated: 2024/04/18 18:16:08 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parse_stack_argv(t_stack *a)
{
	// Check is invalid number
	// printf("Each element %d\n", a->data);
	// printf("Each element %d\n", a->next->data);
	// printf("Each element %d\n", a->next->next->data);
	// printf("Each element %d\n", a->next->next->next->data);
	// printf("Each element %d\n", a->next->next->next->next->data);
	// printf("Each element %d\n", a->next->next->next->next->next->data);
	// if they are same number
	// if they are maxint or minint
	print_stack(a);
}
void	create_stack_argv(int argc, char **argv, t_stack *a)
{
	char	**converted_argv;
	int		converted_int;
	t_stack	*new_elem;
	int		i;

	// int		check;
	if (argc == 2)
	{
		i = 0;
		converted_argv = ft_split(argv[1], ' ');
		while (converted_argv[i])
		{
			if (converted_argv[i][0] >= 'a' && converted_argv[i][0] <= 'z')
				exit_program(converted_argv, "There is CHAR type in arguments");
			else
			{
				converted_int = ft_atoi(converted_argv[i]);
				new_elem = ft_stack_new(converted_int);
				ft_stackadd_back(&a, new_elem);
			}
			i++;
		}
		free_array(converted_argv);
	}
	else
	{
		i = 1;
		while (argv[i])
		{
			if (argv[i][0] >= 'a' && argv[i][0] <= 'z')
				exit_program(NULL, "There is CHAR type in arguments");
			converted_int = ft_atoi(argv[i]);
			ft_stackadd_back(&a, ft_stack_new(converted_int));
			i++;
		}
	}
	parse_stack_argv(a);
}
int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	(void)b;
	a = NULL;
	if (argc == 1)
		exit_program(NULL, "Wrong argument number!");
	create_stack_argv(argc, argv, a);
	return (1);
}
