#include <stdio.h>
int main() {
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    printf("ASCII Value of %c is %d", ch, (int)ch);
    return 0;
}
