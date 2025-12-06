#include <stdio.h>

int main() {
    int x, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    for(; x!= 0; x = x / 10) {
        sum= sum + (x%10);
    }
    printf("sum of digits = %d\n", sum);
    return 0;
}
