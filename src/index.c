/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:59:43 by leduard2          #+#    #+#             */
/*   Updated: 2024/01/31 18:50:12 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// 5 20 35 90 2 -1
void	assign_index(t_stack *stack, int stack_size)
{
	t_stack *head;
	t_stack *high;
	int value;

	
	head = stack;
	while (--stack_size >= 0)
	{
		value = MIN_INT;
		while (stack != NULL)
		{
			if (stack->value >= value && stack->index == -1)
			{
				value = stack->value;
				high = stack;
			}
			stack = stack->next;
		}
		stack = head;
		high->index = stack_size;
	}
}