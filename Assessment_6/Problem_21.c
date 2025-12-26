#include <stdio.h>
int main() {
    int n;
    int digit, count = 0;
    scanf("%d", &n);
    while (n > 0) {
        digit = n % 10;
        if (digit % 2 == 1)
            count++;
        n = n / 10;
    }
    printf("%d", count);
}
