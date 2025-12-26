#include <stdio.h>
int main() {
    int n, last2, i = 2, flag = 1;
    scanf("%d", &n);
    last2 = n % 100;
    if (last2 <= 1)
        flag = 0;
    while (i < last2 && flag == 1) {
        if (last2 % i == 0)
            flag = 0;
        i++;
    }
    if (flag == 1)
        printf("Prime");
    else
        printf("Not Prime");
}
