#include <stdio.h>
int main() {
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    if((x%10)<(x/10)){
        printf("Success");   
    }else{
        printf("Failure");
    }
}
