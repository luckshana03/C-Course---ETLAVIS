#include <stdio.h>
int main()
{
    int num,count=0;
    scanf("%d",&num);
    for(int i=0;i<num;num=num/10){
        count=count+(num%10);
    }
    printf("%d",count);
}