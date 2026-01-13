#include <stdio.h>

int main() {
    int num;
    int *ptr;

    scanf("%d", &num);

    printf("%d\n", num);

    ptr = &num;

    *ptr = *ptr + 10;  

    printf("%d\n", num);

    return 0;
}
