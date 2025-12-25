#include <stdio.h>
int main() {
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    int temp=x;
    int sum = (temp/10)+(temp%10);
    y = (x-(sum%2)*5);
    printf("Result = %d",y);
}
