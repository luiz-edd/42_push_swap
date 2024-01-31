/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:23:02 by leduard2          #+#    #+#             */
/*   Updated: 2024/01/31 18:32:42 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack *stack_a;
	t_stack *stack_b;
	
	
	stack_a = create_stack(argc, argv);
	stack_b = NULL;
	// print_stack(stack_a, "stack_a");
	assign_index(stack_a, get_stack_len(stack_a));
	print_stack(stack_a, "stack_a");
	
}