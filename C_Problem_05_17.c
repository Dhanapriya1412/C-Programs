#include <stdio.h>

int main() {
    int x,i,flag = 0,sum = 0, a , b;
    printf("Enter a number: ");
    scanf("%d", &x );
    if (x <= 1) {
        printf("Not Prime\n");
        return 0;
    }
    for (i = 2; i <= x/2; i++) {
        if (x % i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("Prime");
    else
        printf("Not Prime");
        
    a = x;
    for(; a > 0; a/= 10)
    {
         b = a % 10;
        sum = sum + b ;
    }
     if(sum == 14)
        printf(" & sum of digits is 14");
    else
        printf(" & sum of digits is not 14");
    return 0;
}
