#include <stdio.h>

int main() {
    int x, n1, n2, twoDigit, count = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    for(; x > 9; x = x / 10) {
        n1 = x % 10;        
        n2 = (x / 10) % 10;
        twoDigit = n2 * 10 + n1;  
        if(twoDigit == 16 || twoDigit == 25 || twoDigit == 36 ||
           twoDigit == 49 || twoDigit == 64 || twoDigit == 81) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
