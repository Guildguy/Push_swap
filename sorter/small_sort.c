#include "../push_swap.h"

void	small_Sort(t_node **stack)
{
	t_node	*largest;

	largest = find_largest(*stack);
	if (largest == *stack)
		ra(stack);
	else if (largest = (*stack)->next)
		rra(stack);
	if ((*stack)->n > (*stack)->next->n)
		sa(stack);
}