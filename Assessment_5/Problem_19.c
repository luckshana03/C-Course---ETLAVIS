#include <stdio.h>
int main() {
    int n, middleTwo, i, count = 0;
    printf("Enter a 4-digit number: ");
    scanf("%d", &n);
    middleTwo = (n / 10) % 100;
    if (middleTwo <= 1) {
        printf("Not Prime");
        return 0;
    }
    for (i = 1; i <= middleTwo; i++) {
        if (middleTwo % i == 0)
            count++;
    }
    if (count == 2)
        printf("Prime");
    else
        printf("Not Prime");
}
