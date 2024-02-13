
#include "push_swap.h"

static void	verify_digits(char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[i])
	{
		j = 0;
		if (argv[i][j] == '\0')
			exit_error(NULL, NULL);
		while (argv[i][j])
		{
			if (argv[i][j] == '+' || argv[i][j] == '-')
				j++;
			if (ft_isdigit(argv[i][j]) != 1)
			{
				// free(argv);
				exit_error(NULL, NULL);
			}
			j++;
		}
		i++;
	}
}

static void	verify_int_size(char *str)
{
	long	num;

	num = ft_atol(str);
	if (num > MAX_INT || num < MIN_INT)
		exit_error(NULL, NULL);
}

static void	verify_duplicates(char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[i])
	{
		verify_int_size(argv[i]);
		j = i + 1;
		while (argv[j])
		{
			if (ft_atol(argv[i]) == ft_atol(argv[j]))
			{
				// free(argv);
				exit_error(NULL, NULL);
			}
			j++;
		}
		i++;
	}
}

char	**validate_args(int argc, char **argv)
{
	if (argc < 2)
		exit_error(NULL, NULL);
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	else
		argv = argv + 1;
	if (argv[0] == NULL)
		exit_error(NULL, NULL);
	verify_digits(argv);
	verify_duplicates(argv);
	return (argv);
}
