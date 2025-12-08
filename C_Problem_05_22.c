#include <stdio.h>

int main() {
    int x, next, twoDigit, count = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    for(; x > 9; x = x / 10) {
        next = (x / 10) % 10;          
        twoDigit = (next * 10) + (x % 10);

        if(twoDigit % 2 != 0) {        
            count++;
        }
    }
    printf(" %d", count);
    return 0;
}
