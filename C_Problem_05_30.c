#include <stdio.h>

int main()
{
    int a, b, y, x;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for(x = 1; x <= (a < b ? a : b); x++)
    {
        if(a % x == 0 && b % x == 0)
            y = x;      
    }
    printf("HCF = %d", y);

    return 0;
}

