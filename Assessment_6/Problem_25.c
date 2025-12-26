#include <stdio.h>
int main() {
    int n, d, count = 0;
    scanf("%d", &n);
    while (n > 0) {
        d = n % 10;
        if (d == 2 || d == 3 || d == 5 || d == 7)
            count++;
        n = n / 10;
    }
    printf("%d", count);
}
