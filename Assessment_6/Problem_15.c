#include <stdio.h>
int main() {
    int n, temp, pow10 = 1, first, rest;
    scanf("%d", &n);
    temp = n;
    while (temp >= 10) {
        temp = temp / 10;
        pow10 = pow10 * 10;
    }
    first = temp;
    rest = n % pow10;
    if (first % 2 == 1)
        first = first - 1;
    n = first * pow10 + rest;
    printf("%d", n);
}
