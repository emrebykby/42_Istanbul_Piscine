#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int	main(void)
{
	char array[] = "42istanbul";
	char array1[] = "i";

	printf("%s", ft_strstr(array, array1));

}	
