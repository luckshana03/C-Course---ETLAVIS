#include <stdio.h>
int main() {
    char numStr[51];
    int intArr[50];
    int i = 0;
    printf("Enter a number (up to 50 digits): ");
    scanf("%50s", numStr);
    while (numStr[i] != '\0') {
        intArr[i] = numStr[i] - '0';   
        i++;
    }
    printf("\nInteger Array:\n");
    for (int j = 0; j < i; j++) {
        printf("%d ", intArr[j]);
    }
    return 0;
}
