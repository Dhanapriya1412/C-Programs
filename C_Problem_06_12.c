#include<stdio.h>
int main()
{
    int x, sum = 0;
    printf("Enter number:");
    scanf("%d", &x);
    loop:
    while(x > 0)
    {
        int a = x % 10;   
        sum = sum + a;    
        x = x / 10;       
        goto loop;
    }
    printf("%d", sum);
}

