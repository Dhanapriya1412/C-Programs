#include <stdio.h>

int main() {
    
    int x, y;
    
    printf("Enter number:");

    scanf("%d", &x);     
    
    y = x % 100;         
           
    x = ((x/100) % 10) * 10 + ((x/100) / 10);   

    printf("Result=%d%d", x, y);  

    return 0;
}
