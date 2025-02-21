/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleite-j <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:20:28 by fleite-j          #+#    #+#             */
/*   Updated: 2025/02/13 17:20:30 by fleite-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_node(t_node **root, int val)
{
	t_node	*new_node;
	t_node	*curr;

	new_node = malloc(sizeof(t_node));
	new_node->val = val;
	new_node->next = NULL;
	if (new_node == NULL)
		exit(1);
	if (*root == NULL)
	{
		*root = new_node;
		return ;
	}
	curr = *root;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = new_node;
}

int	main(int ac, char *av[])
{
	t_node	*root;
	t_node	*curr;
	int		i;	

	root = NULL;
	i = 1;
	while (i < ac)
	{
		create_node(&root, ft_atol(av[i]));
		i++;
	}
	curr = root;
	while (curr != NULL)
	{
		printf("%d\n", curr->val);
		curr = curr->next;
	}
	deallocate(&root);
	return (0);
}
