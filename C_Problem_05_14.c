#include <stdio.h>

int main() {
    int val, temp, power = 1;
    int first, last, mid, result;
    printf("Enter the number: ");
    scanf("%d", &val);
    temp = val;
    for (; temp >= 10; temp /= 10) {
        power *= 10;
    }
    first = val / power;     
    last  = val % 10;        
    mid = val % power;       
    mid = mid / 10;          
    result = last * power + mid * 10 + first;
    printf("Result: %d", result);
    return 0;
}
