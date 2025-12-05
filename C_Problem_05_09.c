#include <stdio.h>
int main()
{
    int x, sum;
    sum = 0;

    for(x = 10; x < 99; x++)
    {
        if(x % 10 == 5)      
        {
            sum = sum + x;    
        }
    }
    printf("%d\n", sum);      
    return 0;
}
