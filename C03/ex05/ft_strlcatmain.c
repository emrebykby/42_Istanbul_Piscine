#include <stdio.h>
#include <string.h>


int		main(void)
{
	char str1[30] = "Bilgisayar";
	char str2[] = " Programlama";
	strlcat(str1, str2, 4);
	int	number = strlcat(str1, str2, 4);
	printf("%d\n", number);
    printf("%s\n", str1);
	return (0);
}

