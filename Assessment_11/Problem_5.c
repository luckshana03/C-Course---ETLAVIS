#include <stdio.h>

void memcpy(int *src, int *dst, int size) {
    int i;
    int *ps = src;
    int *pd = dst;
    int *pi = &i;

    for (*pi = 0; *pi < size; (*pi)++) {
        *(pd + *pi) = *(ps + *pi);
    }
}

int main() {
    int n;
    int *pn = &n;
    scanf("%d", pn);
    int src[n], dst[n];
    int *ps = src;
    int *pd = dst;
    for (int i = 0; i < *pn; i++) {
        scanf("%d", ps + i);
    }
    memcpy(ps, pd, *pn);
    for (int i = 0; i < *pn; i++) {
        printf("%d ", *(pd + i));
    }

    return 0;
}
