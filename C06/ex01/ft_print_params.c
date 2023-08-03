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

	t = 1;
	if (argv > 1)
	{
		while (t != argv)
		{
			ft_putstr(argc[t]);
			t++;
			if (t != argv)
				write(1, "\n", 1);
		}
	}
	return (0);
}
