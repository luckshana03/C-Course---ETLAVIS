#include <stdio.h>
int main() {
    int n, i, count = 0;
    int sum = 0, temp, digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) {
        count = 0;
    } else {
        for (i = 1; i <= n; i++) {
            if (n % i == 0)
                count++;
        }
    }
    temp = n;
    for (; temp > 0; temp = temp / 10) {
        digit = temp % 10;
        sum += digit;
    }
    if (count == 2 && sum == 14)
        printf("Prime & sum of digits is 14");
    else if (count != 2 && sum == 14)
        printf("Not Prime but sum of digits is 14");
    else if (count == 2 && sum != 14)
        printf("Prime & sum of digits is not 14");
    else
        printf("Not Prime & sum of digits is not 14");

    return 0;
}
