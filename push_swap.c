/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:06:16 by sumseo            #+#    #+#             */
/*   Updated: 2024/04/18 19:41:28 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parse_stack_argv(t_stack *a)
{
	int	stack_size;
	int	i;

	if (a == NULL)
		exit_program(NULL, "Stack is empty");
	print_stack(a);
	stack_size = ft_stack_size(a);
	i = 0;
	while (a)
	{
		if (a->data == a->next->data)
		{
			printf("dataaaam %d\n", a->data);
			exit_program(NULL, "Some number is same");
		}
		else
		{
			printf("data %d\n", a->data);
			a = a->next;
		}
	}
}
void	create_stack_argv(int argc, char **argv, t_stack *a)
{
	char	**converted_argv;
	int		converted_int;
	t_stack	*new_elem;
	int		i;
	int		j;

	if (argc == 2)
	{
		i = 0;
		converted_argv = ft_split(argv[1], ' ');
		while (converted_argv[i])
		{
			j = 0;
			while (converted_argv[i][j])
			{
				if (converted_argv[i][j] == '+' || converted_argv[i][j] == '-')
					j++;
				if (!ft_isdigit(converted_argv[i][j]))
					exit_program(converted_argv,
						"There is CHAR type in arguments.");
				else
				{
					converted_int = ft_atoi(converted_argv[i]);
					new_elem = ft_stack_new(converted_int);
					ft_stackadd_back(&a, new_elem);
				}
				j++;
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
