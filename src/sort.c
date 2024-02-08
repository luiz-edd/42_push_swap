/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:25:00 by leduard2          #+#    #+#             */
/*   Updated: 2024/02/08 19:49:47 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	shift_stack(t_stack **stack)
{
	int	lowest_pos;
	int	stack_size;

	// t_stack *node_0;
	stack_size = get_stack_len(*stack);
	lowest_pos = get_minimum_index(*stack)->position;
	while((*stack)->index != 0)
	{
		// ft_printf("index: %d\n",(*stack)->index);
		ra(stack);
	}
	// ft_printf("index: %d\n",(*stack)->index);
}

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
	while (stack_size > 3)
	{
		pb(stack_a, stack_b);
		stack_size--;
	}
}
void	sort(t_stack **stack_a, t_stack **stack_b, int stack_a_size)
{
	push_all_save_three(stack_a, stack_b, stack_a_size);
	sort_3(stack_a);

	while (*stack_b)
	{
		get_target_position(stack_a, stack_b);
		get_cost(*stack_a, *stack_b);
		do_cheapest_move(stack_a, stack_b);
	}
	if (!is_sorted(*stack_a))
		shift_stack(stack_a);
}