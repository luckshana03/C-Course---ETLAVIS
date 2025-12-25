#include <stdio.h>
int main() {
    int n, i = 2, flag = 1;
    scanf("%d", &n);
    if (n <= 1) {
        printf("Not Prime");
        return 0;
    }
check:
    if (i <= n / 2) {
        if (n % i == 0) {
            flag = 0;
            goto end;
        }
        i++;
        goto check;
    }
end:
    if (flag == 1)
        printf("Prime");
    else
        printf("Not Prime");

}

