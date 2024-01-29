/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:46:23 by leduard2          #+#    #+#             */
/*   Updated: 2024/01/29 18:11:39 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack **head, char *stack_name)
{
	t_stack	*stack;

	stack = *head;
	ft_printf("%s\n", stack_name);
	while (stack)
	{
		printf("value: %5d\nindex: %5d\nposition: %5d\ntarget_position: \
				%5d\ncost_a: %5d\ncost_b %5d\n",
				stack->value,
				stack->index,
				stack->position,
				stack->target_position,
				stack->cost_a,
				stack->cost_b);
		ft_printf("********************************************************\n");
		stack = stack->next;
	}
}

t_stack	*get_last_node(t_stack *stack)
{
	
	while (stack && stack->next != NULL)
		stack = stack->next;
	return (stack);
}

void	add_node(t_stack **head, t_stack *new)
{
	t_stack	*stack;

	stack = get_last_node(head);
	stack->next = new;
	new->prev = stack;
}

t_stack	*new_stack(int value)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	new->value = value;
	new->index = 0;
	new->position = -1;
	new->target_position = -1;
	new->cost_a = -1;
	new->cost_b = -1;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

t_stack	*create_stack(int argc, char **argv)
{
	t_stack *stack_head;
	int i;
	long num;

	i = 1;
	stack_head = NULL;
	while (i < argc)
	{
		num = ft_atol(argv[i]);
		if (num > MAX_INT || num < MIN_INT)
			exit_error(&stack_head, NULL);
		if (stack_head == NULL)
			stack_head = new_stack((int)num);
		else
			add_node(&stack_head, new_stack((int)num));
	}
	return (stack_head);
}