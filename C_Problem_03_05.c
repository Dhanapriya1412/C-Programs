#include <stdio.h>
int main() {
    int x;
    printf("Enter number: ");
    scanf("%d", &x);
    if (x<=50)
        printf("success");
    else
        printf("failure");
    return 0;
}
