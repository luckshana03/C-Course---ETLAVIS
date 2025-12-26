#include <stdio.h>
int main()
{
    for(int i=1;i<=100;i++){
        if(i%2==0 && i>10){
            if((i/10)+(i%10)==6){
                printf("%d\n",i);
            }
        }
    }
}