#include <stdio.h>

int main()
{
    int x = 0;        
    int n, sum, count = 0;
loop:
    for ( ; x < 100000 ; )
    {
        n = x;
        sum = 0;
        while (n > 0)
        {
            sum = sum + n % 10;
            n = n / 10;
        }
        if (sum == 14)
            count++;
        x++;          
        goto loop;    
    }
    printf("Total count = %d", count);
    return 0;
}
