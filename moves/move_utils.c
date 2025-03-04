#include "../push_swap.h"

void	set_top_a(t_node **stack, t_node *top)
{
	while (*stack != top)
	{
		if (top->upper_part)
			ra(stack);
		else
			rra(stack);
	}
}

void	set_top_b(t_node **stack, t_node *top)
{
	while ((*stack != top))
	{
		if (top->upper_part)
			rb(stack);
		else
			rrb(stack);
	}
}

void	rotate_a_b(t_node **stack_a, t_node **stack_b, t_node *shortest)
{
	while (*stack_a != shortest && *stack_b != shortest->target)
		rr(stack_a, stack_b);
	set_position(*stack_a);
	set_position(*stack_b);
}

void	reverse_a_b(t_node **stack_a, t_node **stack_b, t_node *shortest)
{
	while (*stack_a != shortest && *stack_b != shortest->target)
		rrr(stack_a, stack_b);
	set_position(*stack_a);
	set_position(*stack_b);
}
