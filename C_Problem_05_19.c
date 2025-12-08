#include <stdio.h>

int main()
{
    int x, mid2, i, flag = 0;
    printf("Enter a 4-digit number: ");
    scanf("%d", &x);
    mid2 = (x / 10) % 100;
    flag = 0;

    if (mid2 <= 1)
        flag = 1;
    else
    {
        for (i = 2; i <= mid2 / 2; i++)
        {
            if (mid2 % i == 0)
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

