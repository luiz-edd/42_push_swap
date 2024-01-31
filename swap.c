/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 19:12:09 by leduard2          #+#    #+#             */
/*   Updated: 2024/01/31 19:40:39 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **head)
{
	t_stack *a;
	t_stack *b;
	t_stack *tmp;
	a = *head;
	b = a->next;
	tmp = b->next;

	*head = (*head)->next;
	(*head)->next = a;
	a->next = tmp;
}