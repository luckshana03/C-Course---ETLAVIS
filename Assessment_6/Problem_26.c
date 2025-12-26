#include <stdio.h>
int main() {
    int n = 9999;
    while (n >= 1000) {
        if (n % 63 == 0)
            break;
        n--;
    }
    printf("%d", n);
}
