#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	int	result;
	
	result = ft_find_next_prime(-2147483648);
	printf("%d\n", result);	
	return (0);
}
