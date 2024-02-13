
#include "push_swap.h"

void	verify_duplicates(char **argv)
{
	char	*curremt;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_atol(argv[i]) == ft_atol(argv[j]))
			{
				free(argv);
				ft_printf("duplicated args\n");
				exit(EXIT_FAILURE);
			}
			j++;
		}
		i++;
	}
}


void	validate_args(int argc, char **argv)
{
	if (argc < 2)
		exit_error(NULL, NULL);
	if (argc == 2)
		argv == ft_split(argv[1], ' ');
	verify_digits(argv);
	verify_duplicates(argv);
}
