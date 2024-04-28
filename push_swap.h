/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:04:46 by sumseo            #+#    #+#             */
/*   Updated: 2024/04/28 17:02:31 by sumseo           ###   ########.fr       */
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
	struct s_stack	*next;
}					t_stack;

void				exit_program(char **array, char *err_msg);
t_stack				*create_stack_argv(int argc, char **argv, t_stack *a);
t_stack				*ft_stack_new(int data);
void				ft_stackadd_back(t_stack **stacks, t_stack *stack);
void				parse_stack_argv(t_stack *a);
void				ft_stack_free(char **line);
void				free_array(char **line);
void				print_stack(t_stack **a);
int					ft_stack_size(t_stack *stack);
t_stack				*create_stack_two_args(char **converted_argv, t_stack *a);
bool				is_stack_ordered(t_stack *a);
void				sort_small_stack(int stack_size, t_stack **a, t_stack **b);
t_stack				*sort_3_stack(t_stack **a);
t_stack				*sort_4_stack(t_stack **a, t_stack **b);
t_stack				*sort_5_stack(t_stack **a, t_stack **b);
void				pa(t_stack **a, t_stack **b);
void				pb(t_stack **a, t_stack **b);
void				ra(t_stack **a);
void				rb(t_stack **b);
void				rr(t_stack **a, t_stack **b);
void				rra(t_stack **a);
void				rrb(t_stack **a);
void				rrr(t_stack **a, t_stack **b);
void				sa(t_stack **a);
void				sb(t_stack **b);
void				ss(t_stack **a, t_stack **b);
void				print_stacks(t_stack *a, t_stack *b);
void				ft_stackadd_front(t_stack **stack, t_stack *new);
void				ft_stackremove_one(t_stack **stack, int num);
t_stack				*ft_stack_last(t_stack *stack);
void				ft_stackremove_last_one(t_stack **stack);
void				ft_stackremove_first_one(t_stack **stack);
void				sort_3_stack_util(t_stack **a, int check);
int					find_min_stack(t_stack **a);

#endif