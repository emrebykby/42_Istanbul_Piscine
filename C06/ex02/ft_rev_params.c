#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argv, char **argc)
{
	int	t;

	t = argv - 1;
	if (argv > 1)
	{
		while (t != 0)
		{
			ft_putstr(argc[t]);
			t--;
			if (t != 0)
				write(1, "\n", 1);
		}
	}
	return (0);
}
