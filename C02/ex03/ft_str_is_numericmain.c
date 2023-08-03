#include <stdio.h>

 int ft_str_is_numeric(char *str);

 int	main(void)
{
	char	array[] = "123_";
	int	result;
	ft_str_is_numeric(array);
	result = ft_str_is_numeric(array);
	printf("%d\n", result);
	char	array1[] = "0123456789";
	int	result1;
	ft_str_is_numeric(array1);
	result1 = ft_str_is_numeric(array1);
	printf("%d\n", result1);
	char	array2[] = "";
	int result2;
	ft_str_is_numeric(array2);
	result2 = ft_str_is_numeric(array2);
	printf("%d", result2);
}
