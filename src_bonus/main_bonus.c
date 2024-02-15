
#include "../src/push_swap.h"

void	apply_move(t_stack **stack_a, t_stack **stack_b, char *movement)
{
	if (ft_strncmp(movement, "ra\n", 3) == 0)
		ra(stack_a, NO_PRINT);
	else if (ft_strncmp(movement, "rb\n", 3) == 0)
		ra(stack_b, NO_PRINT);
	else if (ft_strncmp(movement, "rr\n", 3) == 0)
		rr(stack_a, stack_b, NO_PRINT);
	else if (ft_strncmp(movement, "rra\n", 4) == 0)
		rra(stack_a, NO_PRINT);
	else if (ft_strncmp(movement, "rrb\n", 4) == 0)
		rrb(stack_b, NO_PRINT);
	else if (ft_strncmp(movement, "rrr\n", 4) == 0)
		rrr(stack_a, stack_b, NO_PRINT);
	else if (ft_strncmp(movement, "sa\n", 3) == 0)
		sa(stack_a, NO_PRINT);
	else if (ft_strncmp(movement, "sb\n", 3) == 0)
		sb(stack_b, NO_PRINT);
	else if (ft_strncmp(movement, "ss\n", 3) == 0)
		ss(stack_a, stack_b, NO_PRINT);
	else if (ft_strncmp(movement, "pa\n", 3) == 0)
		pa(stack_a, stack_b, NO_PRINT);
	else if (ft_strncmp(movement, "pb\n", 3) == 0)
		pb(stack_a, stack_b, NO_PRINT);
	else
		exit_error();
}

void	read_and_move(t_stack **stack_a, t_stack **stack_b)
{
	char	*line;
	int		has_input;

	has_input = 0;
	line = "";
	while (line)
	{
		line = get_next_line(0);
		if (line)
		{
			ft_collect_mem(line);
			apply_move(stack_a, stack_b, line);
			has_input = 1;
		}
	}
	if(!has_input)
		exit_error();
}

// void	read_and_move(t_stack **stack_a, t_stack **stack_b)
// {
// 	char	*buffer;
// 	int		i;

// 	buffer = (char *)ft_calloc(4, 1);
// 	ft_collect_mem(buffer);
// 	i = 0;
// 	while (i < 4 && read(0, &buffer[i], 1) == 1)
// 	{
// 		if (buffer[i] == '\n')
// 		{
// 			apply_move(stack_a, stack_b, buffer);
// 			ft_bzero(buffer, 4);
// 			i = 0;
// 		}
// 		else
// 			i++;
// 	}
// 	// if (i >= 4)
// 	// 	exit_error();
// }

int	main(int argc, char **argv)
{
	t_stack *stack_a;
	t_stack *stack_b;

	argv = validate_args(argc, argv);
	stack_a = create_stack(argv);
	stack_b = NULL;

	read_and_move(&stack_a, &stack_b);
	if (is_sorted(stack_a))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	exit_success();
}