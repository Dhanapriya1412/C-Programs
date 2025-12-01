#include <stdio.h>
int main()
{
    int x, sum;
    x = 1;         
    sum = 0;       
loop: if(x < 6)
    {
        sum = sum + x;   
        x++;             
        goto loop;
    }
    printf("%d", sum);
}
