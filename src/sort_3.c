/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:29:47 by leduard2          #+#    #+#             */
/*   Updated: 2024/02/02 15:52:19 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



void	sort_3(t_stack **stack)
{
	int highest;

	highest = find_highest_index(*stack);
	if ((*stack)->index == highest)
		ra(stack);
	else if((*stack)->next->index == highest)
		rra(stack);
	if((*stack)->index > (*stack)->next->index)
		sa(stack);
}