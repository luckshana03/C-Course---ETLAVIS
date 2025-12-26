#include <stdio.h>
int main() {
    int n = 10, sum = 0;
    while (n < 100) {
        if (n % 10 == 5)
            sum = sum + n;
        n++;
    }
    printf("%d", sum);
}
