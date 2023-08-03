#include <stdio.h>

 char *ft_strcat(char *dest, char *src);

int main(void)
{
    char array[30] = "Bilgisayar";
    char array1[] = " Programlama";

    ft_strcat(array, array1);

    printf("cdizi1 bellek içeriği: %s\n", array);

    return (0);
}
