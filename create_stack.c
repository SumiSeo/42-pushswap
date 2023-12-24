
#include "push_swap.h"

bool	create_stack(t_stack_node **a, char **argv)
{
	int				i;
	t_stack_node	*node;
	bool			no_digit;

	no_digit = false;
	i = 0;
	printf("value A : %d\n", *(char *)a);
	while (argv[i])
	{
		node = malloc(sizeof(node));
		if (!ft_isdigit((int)argv[i][0]))
		{
			no_digit = false;
			break ;
		}
		else
		{
			printf("argv : %s\n", argv[i]);
			node = ft_stacknew(ft_atoi(argv[i]));
			// and add it to big list
			printf("NODE INFO %d\n", node->value);
			ft_stackadd_front(a, node);
			no_digit = true;
		}
		// printf("last stack node: %d\n ", (int)ft_stacklast(a)->value);
		// a is big node(a stack, how can I have access  ? );
		printf("value A : %d\n", (int)ft_stacklast(a)->value);
		free(node);
		i++;
	}
	printf("IS DIGIT %d\n", no_digit);
	return (no_digit);
}
