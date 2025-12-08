#include <stdio.h>
int main() {
    int x,a,b;
    printf("Enter number:");
    scanf("%d", &x);
    a = (x%10);
    b = (x/10)%10;
    if(a == b)
        printf("Success");
    else
        printf("Failure");
    return 0;
}
