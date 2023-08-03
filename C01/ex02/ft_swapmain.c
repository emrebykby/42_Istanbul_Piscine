#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int     main(void)
{
    int a;
    int *pntr1;
    int *pntr2;
    a = 42;
    pntr1 = &a;
    ft_swap(pntr1,pntr2);
    printf("%d", *pntr2);
}
