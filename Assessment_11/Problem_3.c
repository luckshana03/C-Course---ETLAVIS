#include <stdio.h>

void arrange_ascend() {
    int i;
    int *p = &i;

    for (*p = 1; *p <= 5; (*p)++) {
        printf("%d\n", *p);
    }
}

int main() {
    arrange_ascend();
    return 0;
}
