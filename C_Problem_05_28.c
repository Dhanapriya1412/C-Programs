#include <stdio.h>

int main()
{
    int a, b, x;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for(x = (a > b ? a : b); ; x++)   
    {
        if(x % a == 0 && x % b == 0)  
        {
            printf("LCM = %d", x);
            break;                   
        }
    }
    return 0;
}
