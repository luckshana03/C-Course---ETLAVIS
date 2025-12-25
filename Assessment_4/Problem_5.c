#include<stdio.h>
int main(){
    int x=1;
    loop: if(x>=1 && x<=9){
        if(x%2 != 0){
            printf("%d\n",x);
        }
        x++;
        goto loop;
    }
}
