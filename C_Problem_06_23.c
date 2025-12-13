#include <stdio.h>
int main()
{
    int x, a, count = 0;
    printf("Enter the number: ");
    scanf("%d", &x);
    while (x > 0)
    {
        a = x % 10;   
        if (a == 0 || a == 1 || a == 4 || a == 9)
            count++;
        x = x / 10;
    }
    printf("%d", count);
    return 0;
}
