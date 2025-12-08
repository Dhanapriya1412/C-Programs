#include <stdio.h>

int main() {
    int x, temp, digit, count = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    for(temp = x; temp > 0; temp = temp / 10) {
        digit = temp % 10;
        if(digit == 2 || digit == 3 || digit == 5 || digit == 7) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
