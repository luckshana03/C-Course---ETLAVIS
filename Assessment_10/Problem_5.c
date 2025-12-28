#include <stdio.h>
int main() {
    int num, temp, i = 0, j;
    char str[20];
    printf("Enter an integer: ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        str[i] = digit + '0';
        i++;
        temp /= 10;
    }
    str[i] = '\0';
    for (j = 0; j < i / 2; j++) {
        char t = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = t;
    }
    printf("String value = %s", str);
    return 0;
}
