#include <stdio.h>

int main() {
    
    int x, y;

    printf("Enter a number: ");
    
    scanf("%d", &x);

    y = x - 5 * (x % 2);   

    printf("Result = %d", y);

    return 0;
}
