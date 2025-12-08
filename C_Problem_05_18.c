#include <stdio.h>

int main()
{
    int x, last2, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    last2 = x % 100;
    flag = 0;
    if (last2 <= 1)
        flag = 1;
    else
    {
        for (i = 2; i <= last2 / 2; i++)
        {
            if (last2 % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}

