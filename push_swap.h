/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:04:46 by sumseo            #+#    #+#             */
/*   Updated: 2024/05/12 01:32:35 by sumseo           ###   ########.fr       */
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
	int				index;
	int				push_cost;
	bool			above_median;
	bool			cheapest;

	struct s_stack	*next;
	struct s_stack	*prev;
	struct s_stack	*target_node;
}					t_stack;

// handle errors
void				exit_program(char **array, char *err_msg);
void				ft_stack_free(char **line);
void				free_array(char **line);
// stack initiation
t_stack				*create_stack_argv(int argc, char **argv, t_stack *a);
t_stack				*create_stack_two_args(char **converted_argv, t_stack *a);
// node initiation
t_stack				*ft_stack_new(int data);

// stack utils
void				ft_stackadd_back(t_stack **stacks, int data);
void				parse_stack_argv(t_stack *a);
void				print_stack(t_stack **a);
int					ft_stack_size(t_stack *stack);
bool				is_stack_ordered(t_stack *a);
void				sort_small_stack(int stack_size, t_stack **a);
void				sort_3_stack(t_stack **a);
void				print_stacks(t_stack **a, char c);
void				ft_stackadd_front(t_stack **stack, t_stack *new);
void				ft_stackremove_one(t_stack **stack, int num);
t_stack				*ft_stack_last(t_stack *stack);
void				ft_stackremove_last_one(t_stack **stack);
void				ft_stackremove_first_one(t_stack **stack);
void				sort_3_stack_util(t_stack **a, int check);
t_stack				*find_min_stack(t_stack *stack);
void				sort_big_stack(int stack_size, t_stack **a, t_stack **b);

// commands(opeartions)
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
void				push(t_stack **dst, t_stack **src);
void				prep_for_push(t_stack **stack, t_stack *top_node,
						char stack_name);
void				rotate_both(t_stack **a, t_stack **b,
						t_stack *cheapst_node);
void				rev_rotate_both(t_stack **a, t_stack **b,
						t_stack *cheapest_node);

// Algorithms
void				init_nodes_a(t_stack *a, t_stack *b);
void				current_index(t_stack *stack);
void				set_target_a(t_stack *a, t_stack *b);
void				cost_analysis_a(t_stack *a, t_stack *b);
void				set_cheapest(t_stack *stack);
t_stack				*find_max_stack(t_stack *stack);
void				move_a_to_b(t_stack **a, t_stack **b);
t_stack				*get_cheapest(t_stack *stack);
void				init_nodes_b(t_stack *a, t_stack *b);
void				set_target_b(t_stack *a, t_stack *b);
void				move_b_to_a(t_stack **a, t_stack **b);
void				min_on_top(t_stack **a);

#endif