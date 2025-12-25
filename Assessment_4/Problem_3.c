#include<stdio.h>
int main(){
    int x=1,sum=0;
    loop: if(x>=1 && x<=10){
        int temp = sum;
        int temp2 = x;
        sum = temp + temp2;
        x++;
        goto loop;
    }
    printf("%d",sum);
}
