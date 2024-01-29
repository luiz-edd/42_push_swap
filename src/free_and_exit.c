/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_and_exit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:28:25 by leduard2          #+#    #+#             */
/*   Updated: 2024/01/29 18:04:37 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (stack != NULL)
	{
		while ((*stack) != NULL)
		{
			tmp = (*stack)->next;
			free(*stack);
			*stack = tmp;
		}
	}
}

void	exit_error(t_stack **stack_a, t_stack **stack_b)
{
	free_stack(stack_a);
	free_stack(stack_b);
	ft_printf("Error\n");
	exit(EXIT_FAILURE);
}

void	exit_success(t_stack **stack_a, t_stack **stack_b)
{
	free_stack(stack_a);
	free_stack(stack_b);
	exit(EXIT_SUCCESS);
}