#include <stdio.h>
int main() {
    int x, temp, first, last, rev = 0;
    scanf("%d", &x);
    last = x % 10;      
    temp = x / 10;      
loop:
    if (temp >= 10) {
        rev = rev * 10 + (temp % 10);  
        temp = temp / 10;
        goto loop;
    }
    first = temp; 
    temp = rev;
    rev = 0;
loop2:
    if (temp != 0) {
        rev = rev * 10 + (temp % 10);
        temp = temp / 10;
        goto loop2;
    }
    printf("%d", last);
    if (rev != 0)
        printf("%d", rev);
    printf("%d", first);
    return 0;
}
