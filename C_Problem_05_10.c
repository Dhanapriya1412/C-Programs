#include <stdio.h>
int main()
{
    int x, sum;
    sum = 0;

    for(x = 71; x < 80; x = x + 2) 
    {
        sum = sum + x;              
    }
    printf("%d\n", sum);            
    return 0;
}

