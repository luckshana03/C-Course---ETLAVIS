#include <stdio.h>
int main() {
    int a, b, c, lcm;
    scanf("%d%d%d", &a, &b, &c);
    lcm = (a > b) ? a : b;
    while(1) {
        if(lcm % a == 0 && lcm % b == 0)
            break;
        lcm++;
    }
    while(1) {
        if(lcm % c == 0)
            break;
        lcm++;
    }
    printf("%d", lcm);
}
