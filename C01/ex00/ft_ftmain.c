#include <stdio.h>

void    ft_ft(int *nbr)
{
    *nbr = 42;
}

int     main(void)
{
    int x;
    int *pntr;
    x = 42;
    pntr = &x;
    ft_ft(pntr);
    printf("%d\n", x);
    return(0);
}
