#include <stdio.h>
int main() {
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    y=((x/10)*10)+2;
    printf("Result = %d",y);
}
