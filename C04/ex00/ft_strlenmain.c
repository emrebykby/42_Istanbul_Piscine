#include <stdio.h>

 int ft_strlen(char *str);

 int	main(void)
{
	char	str[] = "deneme";
	char	strint[] = "";
	int a;
	int b;

	a = ft_strlen(str);
	b = ft_strlen(strint);

	printf("İÇİNDE --DENEME-- YAZAN DİZİNİN KARAKTER SAYISI = %d\n", a);
	printf("İÇİNDE bir şey yazmayan DİZİNİN KARAKTER SAYISI = %d\n", b);
	return (0);
}
