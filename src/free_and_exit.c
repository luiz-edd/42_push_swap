/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_and_exit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leduard2 <leduard2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:28:25 by leduard2          #+#    #+#             */
/*   Updated: 2024/01/29 18:04:37 by leduard2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exit_error(void)
{
	ft_free_memory();
	ft_printf("Error\n");
	exit(EXIT_FAILURE);
}

void	exit_success(void)
{
	ft_free_memory();
	exit(EXIT_SUCCESS);
}
