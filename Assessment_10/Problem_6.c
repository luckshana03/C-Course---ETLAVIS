#include <stdio.h>
int main() {
    int num, rev = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num > 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    while (rev > 0) {
        int digit = rev % 10;
        char ch = digit + '0';
        printf("%c\n", ch);
        rev /= 10;
    }
    return 0;
}
