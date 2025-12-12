#include <stdio.h>
int main()
{
    int x, temp, first, power = 1;
    printf("Enter a number: ");
    scanf("%d", &x);
    temp = x;
loop:
    temp = temp / 10;
    power = power * 10;
    while(temp > 9)
    {
        goto loop;
    }
    first = temp;       
    if(first % 2 != 0)  
    {
        first = first - 1;
    }
    int remaining = x % power;
    int result = first * power + remaining;
    printf("Output = %d", result);
}
