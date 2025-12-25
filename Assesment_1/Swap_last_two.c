#include <stdio.h>
int main() {
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    int temp=x/100;
    x=x%100;
    int rev=(temp%10)*1000+(temp/10)*100+x;
    printf("Result = %d",rev);  
}
