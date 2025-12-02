#include <stdio.h>
int main()
{
    int x, sum;
    sum = 0;
    x = 71;

loop:
    if(x < 80)
    {
        sum = sum + x; 
        x = x + 2;    
        goto loop;    
    }
    printf("%d\n", sum); 
    return 0;
}
