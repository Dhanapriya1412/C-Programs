#include<stdio.h>

int main()
{
    int val, temp, tmp2, power = 1;
    int first = 0, last = 0, mid, result;

    printf("enter the number: ");
    scanf("%d", &val);

    temp = val;

start:
    if (temp == 0)
        goto end;

    power = power * 10;
    temp = temp / 10;
    goto start;

end:
    power = power / 10;

    tmp2 = val / power;

    first = val / power;
    last  = val % 10;

    mid = val % power;
    mid = mid / 10;

    result = last * power + mid * 10 + first;

    printf("%d", result);

    return 0;
}

