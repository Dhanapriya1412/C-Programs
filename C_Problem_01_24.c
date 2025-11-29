#include <stdio.h>

int main() {
    
    int x, y;
    
    printf("Enter number:");

    scanf("%d", &x);        

    y= x - (5 * ((x / 100) % 2) * ((x % 10) % 2));        
    
    printf("Result:%d", y);

    return 0;
}
