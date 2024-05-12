/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:06:16 by sumseo            #+#    #+#             */
/*   Updated: 2024/05/12 20:38:50 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parse_stack_argv(t_stack *a)
{
	t_stack	*current;

	if (a == NULL)
		exit_program(NULL, "Stack is empty");
	while (a)
	{
		current = a->next;
		while (current)
		{
			if (a->data == current->data && a != current)
			{
				free_stack(&a);
				exit_program(NULL, "Some number is same");
			}
			current = current->next;
		}
		a = a->next;
	}
}

t_stack	*create_stack_two_args(char **converted_argv, t_stack *a)
{
	int	j;
	int	i;
	int	point;

	i = 0;
	point = 1;
	while (converted_argv[i])
	{
		j = 0;
		while (converted_argv[i][j])
		{
			if (converted_argv[i][j] == '+' || converted_argv[i][j] == '-')
				j++;
			if (!ft_isdigit(converted_argv[i][j]))
				exit_program(converted_argv, "CHAR type in arguments.");
			else
			{
				a = check_arg_is_range(i, point, a, converted_argv);
				while (ft_isdigit(converted_argv[i][j]))
					j++;
			}
		}
		i++;
	}
	return (a);
}

t_stack	*control_two_args(char *argv, t_stack *a)
{
	char	**converted_argv;

	converted_argv = ft_split(argv, ' ');
	a = create_stack_two_args(converted_argv, a);
	free_array(converted_argv);
	return (a);
}

t_stack	*create_stack_argv(int argc, char **argv, t_stack *a)
{
	int	i;
	int	converted_int;
	int	point;

	point = 1;
	if (argc == 2)
		a = control_two_args(argv[1], a);
	else
	{
		i = 1;
		while (argv[i])
		{
			if (argv[i][0] >= 'a' && argv[i][0] <= 'z')
				exit_program(NULL, "There is CHAR type in arguments");
			converted_int = ft_atoi(argv[i], &point);
			if (point == 2)
				exit_program(NULL, "The integer arugment is out of range");
			ft_stackadd_back(&a, converted_int);
			i++;
		}
	}
	parse_stack_argv(a);
	return (a);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		stack_size;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		exit_program(NULL, "Wrong argument number!");
	a = create_stack_argv(argc, argv, a);
	if (is_stack_ordered(a))
	{
		free_stack(&a);
		exit(EXIT_FAILURE);
	}
	stack_size = ft_stack_size(a);
	if (stack_size == 3)
		sort_small_stack(stack_size, &a);
	else
		sort_big_stack(stack_size, &a, &b);
	free_stack(&a);
	return (1);
}
