/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleite-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:21:03 by fleite-j          #+#    #+#             */
/*   Updated: 2025/02/13 17:21:05 by fleite-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	deallocate_node(t_node **stack)
{
	t_node	*aux;
	
	while (*stack)
	{
		aux = *stack;
		*stack = aux->next;
		free(aux);
	}
	*stack = NULL;
}

