#include <stdio.h>
int main()
{
    int x, sum;
    printf("Enter number: ");
    scanf("%d", &x);
    sum = 0;        
loop: if(x > 0)
    {
        sum = sum + (x % 10);   
        x = x / 10;             
        goto loop;
    }
    printf("Sum of digits = %d", sum);
}
