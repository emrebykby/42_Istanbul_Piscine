#include <stdio.h>
#include <string.h>

 int ft_strncmp(char *s1, char *s2, unsigned int n);

 int	main(void)
{
	char *array = "den";
	char *array1 = "deneme";
	unsigned int	result;

	result = ft_strncmp(array, array1, 3);
	if (result < 0)
		printf("2.dizi 1.diziden daha büyük");
	else if (result == 0)
		printf("1.dizi ile 2.dizi eşit");
	else if (result > 0)
		printf("1.dizi 2.diziden daha büyük");
	printf("\n");
	return (0);
}
