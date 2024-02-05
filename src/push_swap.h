/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:40:02 by leduard2          #+#    #+#             */
/*   Updated: 2024/02/05 12:37:14 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PIPEX_H

# include "../lib/libft/src/libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	int				position;
	int				target_position;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

void				exit_error(t_stack **stack_a, t_stack **stack_b);

// stack_utils
t_stack				*create_stack(int argc, char **argv);
int					get_stack_len(t_stack *stack);
void				print_stack(t_stack *stack, char *stack_name);
t_stack				*get_last_node(t_stack *stack);

// index
void				assign_index(t_stack *stack, int stack_size);

// swap
void				sa(t_stack **head);
void				sb(t_stack **head);
void				ss(t_stack **head_a, t_stack **head_b);

// push
void				pa(t_stack **head_a, t_stack **head_b);
void				pb(t_stack **head_a, t_stack **head_b);

//rotate
void				ra(t_stack **head_a);
void				rb(t_stack **head_b);
void				rr(t_stack **head_a, t_stack **head_b);

//reverse rotate
void				rra(t_stack **head);
void				rrb(t_stack **head);
void				rrr(t_stack **head_a, t_stack **head_b);

//sort_3
void				sort_3(t_stack **stack);

//sort
void				sort(t_stack **stack_a, t_stack **stack_b,
						int stack_a_size);

//position


#endif