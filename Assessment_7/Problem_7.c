#include <stdio.h>
void disp_2digit_odd_sum7() {
    int i, d1, d2;
    for(i = 10; i <= 99; i++) {
        if(i % 2 == 1) {          
            d1 = i / 10;         
            d2 = i % 10;          
            if(d1 + d2 == 7)      
                printf("%d\n", i);
        }
    }
}
int main() {
    disp_2digit_odd_sum7();
}
