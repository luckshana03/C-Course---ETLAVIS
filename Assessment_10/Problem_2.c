#include <stdio.h>
int main() {
    char num;
    printf("Enter a single number: ");
    scanf("%c", &num);
    printf("ASCII Value of %c is %d", num, (int)num);
    return 0;
}
