#include <stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod)
{
    if(b != 0)
    {
    *div = a/b;
    *mod = a%b;
    }
}
int     main(void)
{
    int sayi1;
    int sayi2;
    int *div1;
    int *mod1;
    sayi1 = 10;
    sayi2 = 8;
    div1 = &sayi1;
    mod1 = &sayi2;
    ft_div_mod(sayi1, sayi2, div1, mod1);
    printf("%d %d", *div1, *mod1);
}
