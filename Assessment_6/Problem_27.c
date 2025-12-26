#include <stdio.h>
int main() {
    int n = 0, temp, d, sum, count = 0;
    while (n < 100000) {
        temp = n;
        sum = 0;
        while (temp > 0) {
            d = temp % 10;
            sum = sum + d;
            temp = temp / 10;
        }
        if (sum == 14)
            count++;

        n++;
    }
    printf("%d", count);
}
