/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:25:00 by leduard2          #+#    #+#             */
/*   Updated: 2024/02/05 12:36:31 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// 1 2 3 4 5
void	push_all_save_three(t_stack **stack_a, t_stack **stack_b,
		int stack_size)
{
	int	i;
	int	middle_index;
	int	total_len;

	i = 0;
	middle_index = stack_size / 2;
	total_len = stack_size;
	while (stack_size > 3 && i < total_len)
	{
		if ((*stack_a)->index <= middle_index)
		{
			pb(stack_a, stack_b);
			stack_size--;
		}
		else
			ra(stack_a);
		i++;
	}
}

void	sort(t_stack **stack_a, t_stack **stack_b, int stack_a_size)
{
	push_all_save_three(stack_a, stack_b, stack_a_size);
	sort_3(stack_a);
	while(*stack_b)
	{
		
	}
}