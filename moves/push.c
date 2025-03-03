#include "../push_swap.h"

static void	push(t_node **stack_1, t_node **stack_2)
{
	t_node	*node;

	if (!*stack_1)
		return ;
	node = *stack_1;
	*stack_1 = (*stack_1)->next;
	if (*stack_1)
		(*stack_1)->prev = NULL;
	node->prev = NULL;
	if (!*stack_2)
	{
		*stack_2 = node;
		node->next = NULL;
	}
	else
	{
		node->next = *stack_2;
		node->next->prev = node;
		*stack_2 = node;
	}
}

void	pa(t_node **stack_a, t_node **stack_b)
{
	push(stack_a, stack_b);
	ft_printf("pa\n");
}

void	pb(t_node **stack_b, t_node **stack_a)
{
	push(stack_b, stack_a);
	ft_printf("pb\n");
}