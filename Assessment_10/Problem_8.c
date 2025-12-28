#include <stdio.h>
int main() {
    char num[51];  
    int i = 0, valid = 1;
    printf("Enter a number (up to 50 digits): ");
    scanf("%s", num);
    while (num[i] != '\0') {
        if (num[i] < '0' || num[i] > '9') {
            valid = 0;
            break;
        }
        i++;
    }
    if (valid)
        printf("Valid Number");
    else
        printf("Invalid Number");
    return 0;
}
