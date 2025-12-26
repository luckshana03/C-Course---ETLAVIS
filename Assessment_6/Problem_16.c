#include <stdio.h>
int main() {
    int n, i = 2, flag = 1;
    scanf("%d", &n);
    if (n <= 1)
        flag = 0;
    while (i < n && flag == 1) {
        if (n % i == 0)
            flag = 0;
        i++;
    }
    if (flag == 1)
        printf("Prime");
    else
        printf("Not Prime");
}
