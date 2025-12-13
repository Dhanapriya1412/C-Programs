#include <stdio.h>

int main()
{
    int x, a, count = 0;

    printf("Enter the number: ");
    scanf("%d", &x);

    while (x > 0)
    {
        a = x % 10;

        if (a % 2 != 0)
            count++;

        x = x / 10;
    }

    printf(" %d\n", count);

    return 0;
}
