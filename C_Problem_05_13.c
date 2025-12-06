#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    int rev = 0;
    for( ; x != 0 ; x = x / 10 )
    {
        rev = rev * 10 + (x % 10);
    }
    printf("Reversed number = %d\n", rev);
    return 0;
}
