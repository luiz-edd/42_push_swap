/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 10:07:15 by leduard2          #+#    #+#             */
/*   Updated: 2024/02/01 15:26:14 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	push(t_stack **head_a, t_stack **head_b)
{
	t_stack	*tmp;

	if (*head_b == NULL)
		return (0);
	tmp = *head_a;
	*head_a = *head_b;
	*head_b = (*head_b)->next;
	if (*head_b)
		(*head_b)->prev = NULL;
	(*head_a)->next = tmp;
	if (tmp)
		tmp->prev = (*head_a);
	return (1);
}

void	pa(t_stack **head_a, t_stack **head_b)
{
	if (push(head_a, head_b))
		ft_printf("pa\n");
}

void	pb(t_stack **head_a, t_stack **head_b)
{
	if (push(head_b, head_a))
		ft_printf("pb\n");
}
