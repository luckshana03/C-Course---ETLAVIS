#include <stdio.h>
int main() {
    int a, b, c, i, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    for (i = max; ; i++) {
        if (i % a == 0 && i % b == 0 && i % c == 0) {
            printf("%d", i);
            break;
        }
    }
}
