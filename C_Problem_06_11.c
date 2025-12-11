#include<stdio.h>
int main()
{
    int x, count = 0;
    printf("Enter number:");
    scanf("%d", &x);
loop:
    while(x > 0)
    {
        int a = x % 10;   
        count++;         
        x = x / 10;      
        goto loop;
    }
    printf("%d", count);
}


