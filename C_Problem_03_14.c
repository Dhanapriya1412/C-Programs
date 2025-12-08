#include <stdio.h>
int main() {
    int x,a,b;
    printf("Enter number:");
    scanf("%d", &x);
    a = (x%100);
    b = (x/100);
    if(a == b)
        printf("Success");
    else
        printf("Failure");
    return 0;
}
