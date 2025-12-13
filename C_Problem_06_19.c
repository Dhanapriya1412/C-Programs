#include <stdio.h>
int main()
{
    int x, a, b, mid, i, flag = 1;
    printf("Enter a 4-digit number: ");
    scanf("%d", &x);
    a = (x / 100) % 10;   
    b = (x / 10) % 10;    
    mid = a * 10 + b;     
    if (mid <= 1)
        flag = 0;
        i = 2;
    while (i <= mid / 2)
    {
        if (mid % i == 0)
        {
            flag = 0;
            goto loop;
        }
        i++;
    }
loop:
    if (flag == 1)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
