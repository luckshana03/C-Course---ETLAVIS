#include <stdio.h>
int main() {
    int x, count = 0;
    scanf("%d", &x);
loop:
    if (x != 0) {
        count++;
        x = x / 10;   
        goto loop;
    }
    printf("%d", count);
}

