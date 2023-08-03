#include <stdio.h>

int main()
{
    int result;
    int a;

    for(int check = 2; check <= 50; check++)
    {
        a = 0;
        for(int divide = 2; divide < check; divide++)
        {
            result = check%divide;
            while(result == 0)
            {
                a = 1;
                result = 1;
            }
        }
        while(a == 0)
        {
            printf("%d,", check);
            a = 1;
        }
    }
}
