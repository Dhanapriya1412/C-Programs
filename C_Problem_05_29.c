#include <stdio.h>

int main()
{
    int a, b, c, x;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    x = (a > b ? (a > c ? a : c) : (b > c ? b : c));
    for( ; ; x++)       
    {
        if(x % a == 0 && x % b == 0 && x % c == 0)
        {
            printf("LCM = %d", x);
            break;
        }
    }
    return 0;
}
