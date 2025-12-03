#include <stdio.h>

int main() {
    int num, i = 2, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf(" Not Prime ", num);
        return 0;
    }

loop:
    if (i * i > num) 
        goto end; 
    if (num % i == 0) {
        flag = 1;
        goto end;
    }
    i = i + 1;
    goto loop;

end:
    if (flag == 0) {
        printf( " Prime ", num);
    } 
    else {
        printf(" Not Prime ", num);
    }

    return 0;
}
