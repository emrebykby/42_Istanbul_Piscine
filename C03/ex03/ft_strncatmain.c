#include <stdio.h>
#include <string.h>

 char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
    char array[30] = "Bilgisayar";
    char array1[] = " Programlama";

    ft_strncat(array, array1, 4);

    printf("cdizi1 bellek içeriği: %s\n", array);

    return (0);
}
