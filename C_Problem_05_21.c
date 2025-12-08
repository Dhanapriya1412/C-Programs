#include <stdio.h>

int main() {
    int x, digit, count = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    for ( ; x > 0; x = x / 10 ) {
        digit = x % 10;      

        if (digit % 2 != 0) {  
            count++;
        }
    }
   printf("%d", count);

    return 0;
}
