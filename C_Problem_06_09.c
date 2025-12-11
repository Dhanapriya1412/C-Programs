#include<stdio.h>
int main()
{
    int x = 10,sum=0,a,b;
loop:
    while(x < 100)
    {
       a = x / 10;   
       b = x % 10;   
       if(b == 5)        
        {
            sum = sum + x;
        }
        x++;
        goto loop;
    }
    printf("%d", sum);
}
