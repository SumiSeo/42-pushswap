/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:06:16 by sumseo            #+#    #+#             */
/*   Updated: 2024/04/25 17:45:11 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parse_stack_argv(t_stack *a)
{
	int		i;
	t_stack	*current;

	if (a == NULL)
		exit_program(NULL, "Stack is empty");
	i = 0;
	while (a)
	{
		current = a->next;
		while (current)
		{
			if (a->data == current->data)
				exit_program(NULL, "Some number is same");
			current = current->next;
		}
		a = a->next;
	}
}

t_stack	*create_stack_two_args(char **converted_argv, t_stack *a)
{
	int		converted_int;
	int		j;
	t_stack	*new_elem;
	int		i;

	i = 0;
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
				converted_int = ft_atoi(converted_argv[i]);
				new_elem = ft_stack_new(converted_int);
				ft_stackadd_back(&a, new_elem);
			}
			j++;
		}
		i++;
	}
	return (a);
}

t_stack	*create_stack_argv(int argc, char **argv, t_stack *a)
{
	char	**converted_argv;
	int		i;
	int		converted_int;

	if (argc == 2)
	{
		converted_argv = ft_split(argv[1], ' ');
		a = create_stack_two_args(converted_argv, a);
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
	return (a);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		stack_size;

	a = NULL;
	b = NULL;
	if (argc == 1)
		exit_program(NULL, "Wrong argument number!");
	a = create_stack_argv(argc, argv, a);
	if (is_stack_ordered(a))
		exit_program(NULL, "Is is already correctlly ordered");
	stack_size = ft_stack_size(a);
	if (stack_size <= 5)
		sort_small_stack(stack_size, &a, &b);
	return (1);
}
