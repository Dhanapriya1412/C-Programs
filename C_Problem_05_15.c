#include <stdio.h>

int main() {
    int n, temp, power = 1, first, result;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    for (; temp >= 10; temp /= 10) {
        power *= 10;
    }
    first = n / power;   
    if (first % 2 == 0) {
        result = n;
    } else {
        result = (first - 1) * power + (n % power);
    }
    printf("Output: %d", result);
    return 0;
}
