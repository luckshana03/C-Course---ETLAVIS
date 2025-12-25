#include <stdio.h>
int main() {
    int x, sum = 0,temp=0;
    scanf("%d", &x);
loop:
    if (x != 0) {
        temp=x%10;
        sum=sum+temp;
        x=x/10;
        goto loop;
    }
    printf("%d", sum);
}
