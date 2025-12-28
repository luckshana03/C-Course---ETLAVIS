#include <stdio.h>
int main() {
    char num[51];
    int i, len = 0;
    printf("Enter a number (up to 50 digits): ");
    scanf("%s", num);
    while (num[len] != '\0') {
        len++;
    }
    printf("Reversed number: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", num[i]);
    }
    return 0;
}
