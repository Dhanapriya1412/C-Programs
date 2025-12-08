#include <stdio.h>

int main() {
    int x,i,flag = 0;
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
        printf("Prime\n");
    else
        printf("Not Prime\n");
    return 0;
}
