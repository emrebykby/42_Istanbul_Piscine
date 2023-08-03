#include <stdio.h>

 int ft_str_is_alpha(char *str);

 int	main(void)
{
	char	array[] = "ABet";
	int	result;
	ft_str_is_alpha(array);
	result = ft_str_is_alpha(array);
	printf("%d\n", result);
	char	array1[] = "&%^'%+%^";
	int	result1;
	ft_str_is_alpha(array1);
	result1 = ft_str_is_alpha(array1);
	printf("%d\n", result1);
	char	array2[] = "";
	int	result2;
	ft_str_is_alpha(array2);
	result2 = ft_str_is_alpha(array2);
	printf("%d" , result2);
}
