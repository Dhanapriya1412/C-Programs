#include <stdio.h>

int main ()
{
    int x, sum;
    x = 1;
    sum = 0;
    while (x <= 5)
    {
        sum = sum + x;
        x++;
    }
    printf("%d", sum);
}

