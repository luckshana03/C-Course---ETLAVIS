#include <stdio.h>
int main() {
    int n, twoDigit, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (; n >= 10; n = n / 10) {
        twoDigit = n % 100;

        if (twoDigit % 2 != 0)
            count++;
    }
    printf("%d", count);
}
