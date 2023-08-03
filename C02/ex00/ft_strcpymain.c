#include <stdio.h>
char *ft_strcpy(char *dest, char *src);

 int	main(void)
{
	char str1[10] = "Hello";
	char str2[10];
	ft_strcpy(str2, str1);
	printf("%s", str2);
}
