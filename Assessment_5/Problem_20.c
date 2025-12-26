#include <stdio.h>
int main() {
    int i, j, count, primeCount = 0;
    for (i = 1; i <= 9; i++) {
        count = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0)
                count++;
        }
        if (count == 2)
            primeCount++;
    }
    printf("%d", primeCount);
}
