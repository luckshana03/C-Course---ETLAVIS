#include <stdio.h>
int main() {
    int a, b, i, hcf = 1, min;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    min = (a < b) ? a : b;
    for (i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }
    printf("%d", hcf);
}
