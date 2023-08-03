#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main( void )
{
    const char *cp1 = "Bilgisayar";
    const char *cp2 = "Bilgileri";
    int ret;

    ret = ft_strcmp(cp1, cp2);

    if(ret<0) printf("cp1 karakter dizisi cp2 karakter dizisinden küçüktür!");
    else if(ret>0) printf("cp2 karakter dizisi cp1 karakter dizisinden küçüktür!");
    else printf("cp1 karakter dizisi cp2 karakter dizisine eşittir!");

    return 0;
}

