#include <stdio.h>
int main() {
    int x,y,a,b,c,d;
    printf("Enter a number: ");
    scanf("%d",&x);
    int temp = x;
    int temp2=x;
    b=temp%10;
    a=x/10;
    y=a%10;
    temp2=temp2/10;
    c=temp2/10;
    int sum = y + b + c;
    printf("Result = %d",sum);
}
