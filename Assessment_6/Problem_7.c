#include <stdio.h>
int main() {
    int n = 11, s, a, b;
    while (n < 100) {
        a = n / 10;      
        b = n % 10;      
        s = a + b;
        if (n % 2 == 1 && s == 7)
            printf("%d\n", n);
        n++;
    }
}
