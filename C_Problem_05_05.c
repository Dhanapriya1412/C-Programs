#include <stdio.h>

int main() {
     int x;
     for(x = 1; x<10 ; x++) {
      if(x % 2 == 1)
        printf("%d\n",x);
        x++;
    }
    return 0;
}
