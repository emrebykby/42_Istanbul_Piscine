#include <stdio.h>

int main(void)
{
    int n,counter=0;
    printf("enter a number: ");
    scanf("%d", &n);
    int emre=n;

    for(int i=n; i>0; i=i/2)
    counter++;
    printf("%d\n" , counter);
    for(int i = counter; i>0;i--)
    {
        for(int j=i-1;j>0;j--)
        emre/=2;
        printf("%d", (emre%2));
        emre=n;

    }
   
    return 0;
}