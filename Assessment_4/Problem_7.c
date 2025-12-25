#include<stdio.h>
int main(){
    int x=1,sum=0;
    loop: if(x>=1 && x<100){
        if(x%2 != 0){
            int sum = (x/10)+(x%10);
            if(sum==7){
                if(x>10){
                printf("%d\n",x);
                }
            }
        }
        x++;
        goto loop;
    }
}
