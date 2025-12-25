#include <stdio.h>
int main() {
    int x = 10, sum = 0;
loop:
    if (x < 100) {
        if ((x / 10) == 7 && (x % 2 != 0)) {
            sum += x;
        }
        x++;
        goto loop;
    }
    printf("%d", sum);  
    return 0;
}
