#include <stdio.h>
int main()
{
    int sum=0;
    for(int i=1;i<=100;i++){
        if(i>10){
        if((i%10)==5){
           sum=sum+i;
        }
       }
    }
    printf("%d",sum);
}