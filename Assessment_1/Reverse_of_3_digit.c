#include <stdio.h>
int main() {
    int x,a;
    printf("Enter a number: ");
    scanf("%d",&x);
    a=x%10;
    int rev=a*10+(x/10);
    printf("Result = %d",rev);
}
