#include <stdio.h>

int main() {
    
    int x, y;
    
    printf("Enter number:");
    
    scanf("%d", &x);

    y = ((x/10) + (x%10)) % 2;  
    
    x = x - y * 5;              

    printf("Result= %d", x);
    
    return 0;
}
