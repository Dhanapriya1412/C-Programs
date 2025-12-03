#include<stdio.h>

int main()
{
    int num, msb, remaining, out, pow = 1, temp;

    printf("Enter number: ");
    scanf("%d", &num);

    temp = num;

    
    while (temp >= 10) {
        temp /= 10;
        pow *= 10;
    }

    msb = num / pow;     
    remaining = num % pow;  
    if (msb % 2 != 0)    
        msb = msb - 1;  

    out = msb * pow + remaining;

    printf("%d", out);

    return 0;
}
