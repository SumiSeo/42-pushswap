/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:04:46 by sumseo            #+#    #+#             */
/*   Updated: 2024/04/18 18:15:50 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <limits.h>
# include <stdarg.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_stack
{
	int				data;
	struct s_stack	*prev;
	struct s_stack	*next;
}					t_stack;

void				exit_program(char **array, char *err_msg);
void				create_stack_argv(int argc, char **argv, t_stack *a);
t_stack				*ft_stack_new(int data);
void				ft_stackadd_back(t_stack **stacks, t_stack *stack);
void				parse_stack_argv(t_stack *a);
void				ft_stack_free(char **line);
void				free_array(char **line);
void				print_stack(t_stack *a);

#endif
