/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <sumseo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:24:44 by sumseo            #+#    #+#             */
/*   Updated: 2024/04/18 18:15:37 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exit_program(char **array, char *err_msg)
{
	if (array)
	{
		free_array(array);
	}
	printf("%s", err_msg);
	exit(EXIT_FAILURE);
}