#include <stdio.h>
int main() {
    int x, temp, last, power = 1;
    scanf("%d", &x);
    last = x % 10;      
    temp = x;
find:
    if (temp >= 10) {
        temp = temp / 10;
        power = power * 10;
        goto find;
    }
    if (last % 2 != 0) {
        x = x - power;
    }
    printf("%d", x);
}
