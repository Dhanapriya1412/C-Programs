#include<stdio.h>
int main()
{
    int x = 10,a,b;
loop:
    while(x < 100)
    {
        a = x / 10;     
        b = x % 10;     
        if((a + b) == 7 && (x % 2 == 1))
        {
            printf("%d\n", x);
        }
        x++;
        goto loop;
    }
}
