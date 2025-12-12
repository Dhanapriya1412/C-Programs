#include <stdio.h>
int main()
{
    int x, i = 2, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
loop:
    if(x % i == 0)
    {
        flag = 1;     
    }
    i = i + 1;

    while(i < x)
    {
        goto loop;
    }
    if(x == 1)
        printf("Not Prime");
    else if(flag == 0)
        printf("Prime");
    else
        printf("Not Prime");
}
