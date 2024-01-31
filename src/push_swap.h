/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:40:02 by leduard2          #+#    #+#             */
/*   Updated: 2024/01/31 18:31:18 by leduard2         ###   ########.fr       */
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

// index
void				assign_index(t_stack *stack, int stack_size);

#endif