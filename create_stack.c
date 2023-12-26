
#include "push_swap.h"

bool	create_stack(t_stack_node **a, char **argv)
{
	int				i;
	t_stack_node	*node;
	bool			no_digit;

	no_digit = false;
	i = 0;
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
			printf("NODE INFO %d\n", node->value);
			ft_stackadd_front(a, node);
			no_digit = true;
		}
		free(node);
		i++;
	}
	printf("IS DIGIT %d\n", no_digit);
	return (no_digit);
}
