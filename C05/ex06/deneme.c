#include <stdio.h>

{
    int n;
    int temp;
    int counter = 0;
    printf("enter a number: ");
    scanf("%d", &n);
    temp = n;

    for(int i = n; i>0; i=i/2)
    counter++;
    for(int i = counter; i>0); i--)
    {
        for(int j = i-1; j>0; j--)
        temp = temp/2;
        printf("%d", (temp%2));
        temp = n;
    }

}
