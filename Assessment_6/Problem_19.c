#include <stdio.h>
int main() {
    int n, mid2, i = 2, flag = 1;
    scanf("%d", &n);
    mid2 = (n / 10) % 100;
    if (mid2 <= 1)
        flag = 0;
    while (i < mid2 && flag == 1) {
        if (mid2 % i == 0)
            flag = 0;
        i++;
    }
    if (flag == 1)
        printf("Prime");
    else
        printf("Not Prime");
}
