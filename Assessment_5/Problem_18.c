#include <stdio.h>
int main() {
    int n, lastTwo, i, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    lastTwo = n % 100;
    if (lastTwo <= 1) {
        printf("Not Prime");
        return 0;
    }
    for (i = 1; i <= lastTwo; i++) {
        if (lastTwo % i == 0)
            count++;
    }
    if (count == 2)
        printf("Prime");
    else
        printf("Not Prime");
}