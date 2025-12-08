#include <stdio.h>
int main()
{
    int x;
    x = 10;     
loop: if(x < 100)
    {
        if((x/10 + x%10 == 7) && (x%2 == 1))
            printf("%d\n", x);
        x++;
        goto loop;
    }
}
