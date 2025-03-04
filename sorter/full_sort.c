#include "../push_swap.h"

static void	move_a(t_node **stack_a, t_node **stack_b)
{
	t_node	*shortest;

	shortest = get_shortest(*stack_a);
	if (shortest->upper_part && shortest->target->upper_part)
		rotate_a_b(stack_a, stack_b, shortest);
	else if (!(shortest->upper_part) && !(shortest->target->upper_part))
		reverse_a_b(stack_a, stack_b, shortest);
	set_top_a(stack_a, shortest);
	set_top_b(stack_a, shortest->target);
	pb(stack_a, stack_b);
}

static void	move_b(t_node **stack_a, t_node **stack_b)
{
	set_top_a(stack_a, (*stack_b)->target);
	pa(stack_b, stack_a);
}

