#include <stdio.h>
int main() {
    int intArr[50];
    char charArr[51]; 
    int n, i;
    printf("Enter number of digits (<= 50): ");
    scanf("%d", &n);
    printf("Enter the digits:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &intArr[i]);
    }
    for(i = 0; i < n; i++) {
        charArr[i] = intArr[i] + '0';
    }

    charArr[n] = '\0';
    printf("\nResult as String: %s", charArr);

    return 0;
}
