/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:23:02 by leduard2          #+#    #+#             */
/*   Updated: 2024/01/31 19:03:51 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_swap(t_stack *stack, int stack_size)
{
	
}

int	main(int argc, char **argv)
{
	t_stack *stack_a;
	t_stack *stack_b;
	int len;
	
	
	stack_a = create_stack(argc, argv);
	stack_b = NULL;
	len = get_stack_len(stack_a);

	assign_index(stack_a, len);
	print_stack(stack_a, "stack_a");
	
}