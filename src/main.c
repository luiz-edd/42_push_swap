/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:23:02 by leduard2          #+#    #+#             */
/*   Updated: 2024/02/02 16:27:08 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

// void push_swap(t_stack *stack, int stack_size)
// {
// }

int	is_sorted(t_stack *stack)
{
	int	current;

	current = MIN_INT;
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	print_stack(t_stack *stack, char *stack_name)
{
	int	i;

	i = 0;
	ft_printf("%s\n", stack_name);
	while (stack != NULL)
	{
		ft_printf("node: %d **************************************\n", i++);
		printf("%20d :value \n", stack->value);
		printf("%20d :index \n", stack->index);
		printf("%20d :position \n", stack->position);
		printf("%20d :target_position \n", stack->target_position);
		printf("%20d :cost_a \n", stack->cost_a);
		printf("%20d :cost_b \n", stack->cost_b);
		stack = stack->next;
	}
}

void	print_stack_rev(t_stack *stack, char *stack_name)
{
	int	i;

	i = 0;
	ft_printf("%s rev\n", stack_name);
	while (stack && stack->next != NULL)
		stack = stack->next;
	while (stack != NULL)
	{
		ft_printf("**************************************\n", i++);
		printf("%20d :value \n", stack->value);
		printf("%20d :index \n", stack->index);
		printf("%20d :position \n", stack->position);
		printf("%20d :target_position \n", stack->target_position);
		printf("%20d :cost_a \n", stack->cost_a);
		printf("%20d :cost_b \n", stack->cost_b);
		stack = stack->prev;
	}
}

void	push_swap(t_stack **stack_a, t_stack **stack_b, int stack_size)
{
	if (is_sorted(*stack_a) != 1)
	{
		if (stack_size == 2)
			sa(stack_a);
		else if(stack_size == 3)
			sort_3(stack_a);
		else
			sort(stack_a, stack_b, stack_size);
	}
}

int	main(int argc, char **argv)
{
	t_stack *stack_a;
	t_stack *stack_b;
	int len;

	stack_a = create_stack(argc, argv);
	stack_b = create_stack(argc, argv);
	len = get_stack_len(stack_a);

	assign_index(stack_a, len);
	rb(&stack_b);
	pa(&stack_a, &stack_b);
	// pa(&stack_a, &stack_b);
	// pa(&stack_a, &stack_b);
	// pa(&stack_a, &stack_b);
	// pa(&stack_a, &stack_b);

	print_stack(stack_a, "stack_a");
	print_stack_rev(stack_b, "stack_b");
	// print_stack_rev(stack_b, "stack_b");
	// print_stack(stack_a, "stack_a");
	rr(&stack_a, &stack_b);
	rb(&stack_b);
	rrr(&stack_a, &stack_b);
	print_stack(stack_a, "stack_a");
	print_stack_rev(stack_b, "stack_b");
	// print_stack(stack_b, "stack_b");
	// print_stack_rev(stack_b, "stack_b");
}
