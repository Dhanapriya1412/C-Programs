#include <stdio.h>

int main() {
    
    int x, y;
    
    printf("Enter number:");

    scanf("%d", &x);     

    y = ((x / 100) * 100 + x % 10);   

    printf("Result = %d", y);

    return 0;
}
