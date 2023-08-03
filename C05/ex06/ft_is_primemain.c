#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	result;
	
	result = ft_is_prime(2147483647);
	printf("%d\n", result);	
	return (0);
}
