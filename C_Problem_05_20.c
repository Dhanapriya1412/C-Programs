#include <stdio.h>

int main()
{
    int i, j, flag, count = 0;
    for (i = 0; i <= 9; i++)
    {
        if (i <= 1)
            continue; 

        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            count++;
    }
    printf("%d\n", count);
    return 0;
}
