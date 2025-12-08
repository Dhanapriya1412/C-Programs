#include <stdio.h>

int main() {
    int x, count= 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    for( ; x!= 0; x = x / 10) {
        count++;
    }
    printf("Total digits = %d\n", count);
    return 0;
}
