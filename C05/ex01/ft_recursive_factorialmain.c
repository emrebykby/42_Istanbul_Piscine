#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int	result;

	result = ft_recursive_factorial(-23);
	printf("%d\n", result);
	return (0);
}
