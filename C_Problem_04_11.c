#include <stdio.h>
int main()
{
    int x, count;
    printf("Enter number: ");
    scanf("%d", &x);
    count = 0;       
loop: if(x > 0)
    {
        x = x / 10;   
        count++;      
        goto loop;
    }
    printf("Total digits = %d", count);
}
