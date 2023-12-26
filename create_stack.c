
#include "push_swap.h"

void	create_stack(t_stack_node **a, char **argv)
{
	int		i;
	long	nbr;

	i = 0;
	while (argv[i])
	{
		nbr = ft_atoi(argv[i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			printf("error");
		append_stack(a, (int)nbr);
		i++;
	}
	while ((*a)->next != NULL)
	{
		printf("A : %d\n", (*a)->value);
		*a = (*a)->next;
	}
	printf("A : %d\n", (*a)->value);
}
