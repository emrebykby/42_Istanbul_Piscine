#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    if(*b != 0)
    {
        int div;
        int mod;
        div = *a/(*b);
        mod = *a%(*b);
        *a = div;
        *b = mod;
    }
}

int     main(void)
{
    int sayi1;
    int sayi2;
    sayi1 = 10;
    sayi2 = 8;
    int *pntr1;
    int *pntr2;
    pntr1 = &sayi1;
    pntr2 = &sayi2;
    ft_ultimate_div_mod(pntr1, pntr2);
    printf("%d  %d", *pntr1, *pntr2);
}

