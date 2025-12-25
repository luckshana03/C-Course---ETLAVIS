#include<stdio.h>
int main(){
    int x=5;
    loop: if(x>0 && x<=5){
        printf("%d\n",x--);
        goto loop;
    }
}
