#include <stdio.h>

 void ft_rev_int_tab(int *tab, int size);

 int	main(void)
{
	int size1 = 10;
	int tab1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	ft_rev_int_tab(tab1, size1);
	for (int i = 0; i < (size1 -1); i++)
	{
        printf("%d", tab1[i]);
	}
}
