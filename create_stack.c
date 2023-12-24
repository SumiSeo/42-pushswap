
#include "push_swap.h"

void	create_stack(t_stack_node **a, char **argv)
{
	int	i;

	i = 0;
	printf("value A : %p\n", (void *)a);
	while (argv[i])
	{
		printf("argv : %s\n", argv[i]);
		i++;
	}
}
