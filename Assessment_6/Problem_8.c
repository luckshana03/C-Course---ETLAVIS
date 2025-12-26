#include <stdio.h>
int main() {
    int n = 10, a, b, s;
    while (n < 100) {
        a = n / 10;     
        b = n % 10;     
        s = a + b;
        if (n % 2 == 0 && s == 6)
            printf("%d\n", n);
        n++;
    }
}
