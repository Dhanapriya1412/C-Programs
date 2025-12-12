#include <stdio.h>
int main()
{
    int x, temp, sum = 0, d;
    int i = 2, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    temp = x;
loop1:
    d = temp % 10;
    sum = sum + d;
    temp = temp / 10;
    while(temp > 0)
    {
        goto loop1;
    }
loop2:
    if(x % i == 0)
    {
        flag = 1;
    }
    i = i + 1;
    while(i < x)
    {
        goto loop2;
    }
    if(flag == 0)  
    {
        if(sum == 14)
            printf("Prime & sum of digits is 14");
        else
            printf("Prime & sum of digits is not 14");
    }
    else           
    {
        if(sum == 14)
            printf("Not Prime but sum of digits is 14");
        else
            printf("Not Prime & Sum of digits is not 14");
    }
}
