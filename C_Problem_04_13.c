#include <stdio.h>
int main()
{
    int x, rev;
    printf("Enter number: ");
    scanf("%d", &x);
    rev = 0;           
loop: if(x > 0)
    {
        rev = rev * 10 + (x % 10);   
        x = x / 10;                  
        goto loop;
    }
    printf("Reverse = %d", rev);
}
