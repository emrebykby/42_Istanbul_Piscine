#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	array[] = "abcdefg";
	int		result;
	result = ft_str_is_lowercase(array);
	printf("%d\n", result);
	char	array1[] = "ABCHSDKMNS";
	int		result1;
	result1 = ft_str_is_lowercase(array1);
	printf("%d\n", result1);
	char	array2[] = "";
	int		result2;
	result2 = ft_str_is_lowercase(array2);
	printf("%d", result2);
}
