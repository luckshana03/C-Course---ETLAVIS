#include <stdio.h>
int main() {
    int n, pair, count = 0;
    scanf("%d", &n);
    while (n >= 10) {
        pair = n % 100;
        if (pair == 16 || pair == 25 || pair == 36 ||
            pair == 49 || pair == 64 || pair == 81)
            count++;
        n = n / 10; 
    }
    printf("%d", count);
}
