#include <stdio.h>

int memcomp(int *src, int *dst, int size) {
    int i;
    int *pi = &i;

    for (*pi = 0; *pi < size; (*pi)++) {
        if (*(src + *pi) != *(dst + *pi)) {
            return 0;  
    }
    return 1;          
}

int main() {
    int n;
    int *pn = &n;

    scanf("%d", pn);

    int a[n], b[n];
    int *pa = a;
    int *pb = b;

    for (int i = 0; i < *pn; i++) {
        scanf("%d", pa + i);
    }

    for (int i = 0; i < *pn; i++) {
        scanf("%d", pb + i);
    }

    if (memcomp(pa, pb, *pn))
        printf("Success");
    else
        printf("Failure");

    return 0;
}
