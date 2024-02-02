/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:25:00 by leduard2          #+#    #+#             */
/*   Updated: 2024/02/02 16:35:49 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// 1 2 3 4 5
void	push_all_save_three(t_stack **stack_a, t_stack **stack_b,
		int stack_a_size)
{
	while(stack_a_size-- > 3)
	{
		pb(stack_a, stack_b);
	}
}

void	sort(t_stack **stack_a, t_stack **stack_b, int stack_a_size)
{
	push_all_save_three(stack_a, stack_b, stack_a_size);
}