#include <stdio.h>
int main() {
    int x,y;
    printf("Enter a number: ");
    scanf("%d",&x);
    int sum=(x%10) + ((x/10)%10) + (x/100);
    printf("%d\n",sum);
    if(sum<10){
        printf("Result = %d",sum);
    }if(sum>=10){
        y=(sum%10)+(sum/10);
        if(y>=10){
            y=(y%10)+(y/10);
            printf("Result = %d",y);            
        }else{
            printf("Result = %d",y);  
        }
    }
}
