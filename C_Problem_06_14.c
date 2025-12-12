#include <stdio.h>
int main()
{
    int x, first, last, temp, power = 1;
    printf("Enter a number: ");
    scanf("%d", &x);
    temp = x;
    last = x % 10;
loop:
    temp = temp / 10;
    power = power * 10;

    while(temp > 9)
    {
        goto loop;
    }
    first = temp;             
    x = x % power;            
    x = x / 10;               
    int result = last * power + x * 10 + first;
    printf("Output = %d", result);
}
