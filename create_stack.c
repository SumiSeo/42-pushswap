
#include "push_swap.h"

void	create_stack(t_stack_node *a, char **argv, bool is_argc_2)
{
	// stack->value = 1;
	a->value = 1;
	printf("create stack called");
	printf("stack : %d\n", a->value);
	printf("argv : %s\n", argv[1]);
	printf("boolean %d\n", is_argc_2);
}
