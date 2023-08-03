#include <stdio.h>
#include <string.h>

 unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int		main(void)
{
	char str1[] = "Source";
    char str2[20];
	ft_strlcpy(str2, str1, 4);
	int	number = strlcpy(str2, str1, 4);
	printf("%d\n", number);
    printf("%s\n", str2);
}
