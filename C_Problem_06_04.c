#include <stdio.h>

int main ()
{
    int x, sum;
    x = 6;
    sum = 0;
    while (x > 0 )
    {
        sum = sum + x;
        x--;
    }
    printf("%d", sum);
}
