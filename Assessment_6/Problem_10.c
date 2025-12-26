#include <stdio.h>
int main() {
    int n = 10, sum = 0, t;
    while (n < 100) {
        t = n / 10;        
        if (t == 7 && n % 2 == 1)
            sum = sum + n;
        n++;
    }
    printf("%d", sum);
}
