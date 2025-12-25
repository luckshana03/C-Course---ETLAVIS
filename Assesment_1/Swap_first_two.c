#include <stdio.h>
int main() {
    int x,a;
    printf("Enter a number: ");
    scanf("%d",&x);
    //first two as it is
    a=(x/100);
    x=x%100;
    int b=(x%10);
    int c=x/10;
    int rev=(a*100)+(b*10)+c;
    printf("Result = %d",rev);
}
