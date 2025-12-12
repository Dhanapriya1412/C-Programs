#include <stdio.h>
int main()
{
    int x, last2, i = 2, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    last2 = x % 100;
loop:
    if(last2 % i == 0)
    {
        flag = 1;
    }
    i = i + 1;

    while(i < last2)
    {
        goto loop;
    }

    if(flag == 0 && last2 != 1)
        printf("Prime");
    else
        printf("Not Prime");
}
