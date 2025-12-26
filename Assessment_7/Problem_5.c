#include <stdio.h>
void disp_odd() {
    int i;
    for(i = 1; i <= 9; i++) {
        if(i % 2 == 1)
            printf("%d\n", i);
    }
}
int main() {
    disp_odd();
}
