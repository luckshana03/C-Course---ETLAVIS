#include <stdio.h>
int main() {
    int i, n, sum, count = 0;
    for (i = 0; i < 100000; i++) {
        n = i;
        sum = 0;
        for (; n > 0; n = n / 10) {
            sum += n % 10;
        }
        if (sum == 14)
            count++;
    }
    printf("%d", count);
}
