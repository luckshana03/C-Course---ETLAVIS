#include <stdio.h>
int main() {
    int x, rev = 0, digit;
    scanf("%d", &x);
loop:
    if (x != 0) {
        digit = x % 10;          
        rev = rev * 10 + digit; 
        x = x / 10;             
        goto loop;
    }
    printf("%d", rev);
}
