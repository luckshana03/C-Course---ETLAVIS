#include <stdio.h>

void intcon(int *src1, int size1, int *src2, int size2, int *dst) {
    int i;
    int *pi = &i;

    for (*pi = 0; *pi < size1; (*pi)++) {
        *(dst + *pi) = *(src1 + *pi);
    }

    for (*pi = 0; *pi < size2; (*pi)++) {
        *(dst + size1 + *pi) = *(src2 + *pi);
    }
}

int main() {
    int n1, n2;
    int *pn1 = &n1;
    int *pn2 = &n2;

    scanf("%d", pn1);
    scanf("%d", pn2);

    int a[n1], b[n2], c[n1 + n2];
    int *pa = a;
    int *pb = b;
    int *pc = c;

    for (int i = 0; i < *pn1; i++) {
        scanf("%d", pa + i);
    }

    for (int i = 0; i < *pn2; i++) {
        scanf("%d", pb + i);
    }

    intcon(pa, *pn1, pb, *pn2, pc);

    for (int i = 0; i < (*pn1 + *pn2); i++) {
        printf("%d ", *(pc + i));
    }

    return 0;
}
