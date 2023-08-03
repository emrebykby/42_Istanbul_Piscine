#include <stdio.h>

 int ft_str_is_printable(char *str);

 int	main(void)
{
	char	array[] = "ABet";
	int	result;
	ft_str_is_printable(array);
	result = ft_str_is_printable(array);
	printf("%d\n", result);
	char	array1[] = "\n";
	int	result1;
	ft_str_is_printable(array1);
	result1 = ft_str_is_printable(array1);
	printf("%d\n", result1);
	char	array2[] = "";
	int	result2;
	ft_str_is_printable(array2);
	result2 = ft_str_is_printable(array2);
	printf("%d" , result2);
}
