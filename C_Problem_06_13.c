#include <stdio.h>
int main()
{
    int x,a,rev = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
loop:
    a = x % 10;          
    rev = rev * 10 + a;  
    x = x / 10;          
    while(x > 0)
    {
        goto loop;
    }
    printf("Reverse = %d", rev);
}
