#include <stdio.h>

int     ft_strlen(char *str)
{
    int counter;
    counter = 0;
    while(str[counter] != '\0')
    {
        counter++;
    }
    return(counter);
}

int     main(void)
{
    char *pnt;
    char array[] = "FENERBAHCE";
    pnt = array;
    int arraynumber = ft_strlen(array);
    printf("%d",arraynumber);
}
