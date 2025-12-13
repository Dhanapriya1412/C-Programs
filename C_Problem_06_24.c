#include <stdio.h>
int main()
{
    int x, a, b, two, count = 0;
    printf("Enter the number: ");
    scanf("%d", &x);
    while (x > 9)
    {
        a = x % 10;
        b = (x / 10) % 10;
        two = b * 10 + a;
        if (two == 16 || two == 25 || two == 36 ||
            two == 49 || two == 64 || two == 81)
            count++;
        x = x / 10;
    }
    printf("%d", count);
    return 0;
}

