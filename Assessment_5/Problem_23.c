#include <stdio.h>
int main() {
    int n, digit, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (; n > 0; n = n / 10) {
        digit = n % 10;

        if (digit == 1 || digit == 4 || digit == 9)
            count++;
    }
    printf("%d", count); return 0;
}
