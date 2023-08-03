#include <stdio.h>
#include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	int a;
	a = 0;
	char str1[] = "Source st.";
	char str2[] = "yha";
	ft_strncpy(str2, str1, 13);
		printf("%s", str2);
	
}	
