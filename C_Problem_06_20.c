#include <stdio.h>
int main()
{
    int x = 2, count = 0, i, flag;
    while (x <= 9)
    {
        flag = 1;
        if (x <= 1)
            flag = 0;
        i = 2;
        while (i <= x / 2)
        {
            if (x % i == 0)
            {
                flag = 0;
                goto loop;
            }
            i++;
        }
loop:
        if (flag == 1)
            count++;
        x++;
    }
    printf("%d", count);
    return 0;
}

