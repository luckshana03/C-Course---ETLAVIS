#include <stdio.h>
int main() {
    int n, digit, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (; n > 0; n = n / 10) {
        digit = n % 10;
        if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
            count++;
    }
    printf("%d", count);
}
