#include <stdio.h>
int main() {
    int n, pair, count = 0;
    scanf("%d", &n);
    while (n >= 10) {
        pair = n % 100; 
        if (pair % 2 == 1) 
            count++;
        n = n / 10; 
    }
    printf("%d", count);
}
