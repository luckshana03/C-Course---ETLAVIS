#include <stdio.h>
int main() {
    long int n;
    int sum = 0;
    scanf("%ld", &n);
    while (n > 0) {
        sum = sum + (n % 10);
        n = n / 10;
    }
    printf("%d", sum);
}
