#include <stdio.h>

 int ft_strcmp(char *s1, char *s2);

 int	main(void)
{
	char array[] = "aaaaaa";
	char array1[] = "deneme";
	int	result;

	result = ft_strcmp(array, array1);
	if (result == -1)
		printf("2.dizi 1.diziden daha büyük");
	else if (result == 0)
		printf("1.dizi ile 2.dizi eşit");
	else if (result == 1)
		printf("1.dizi 2.diziden daha büyük");
	printf("\n");
	return (0);
}
