#include <stdio.h>
int main() {
    int n = 2, i, flag, count = 0;
    while (n <= 9) {
        i = 2;
        flag = 1;
        while (i < n && flag == 1) {
            if (n % i == 0)
                flag = 0;
            i++;
        }
        if (flag == 1)
            count++;

        n++;
    }
    printf("%d", count);
}
