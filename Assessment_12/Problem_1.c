#include <stdio.h>

void getnumbers(char *n1, char *n2) {
    scanf("%s", n1);
    scanf("%s", n2);
}

void addnumbers(char *n1, char *n2, char *res) {
    int i, j, k, carry = 0, sum;
    int *pc = &carry, *ps = &sum;

    /* find length */
    for (i = 0; n1[i] != '\0'; i++);
    for (j = 0; n2[j] != '\0'; j++);

    i--;  
    j--;
    k = 0;

    while (i >= 0 || j >= 0 || *pc) {
        *ps = *pc;

        if (i >= 0)
            *ps += *(n1 + i) - '0';
        if (j >= 0)
            *ps += *(n2 + j) - '0';

        *(res + k) = (*ps % 10) + '0';
        *pc = *ps / 10;

        i--;
        j--;
        k++;
    }

    *(res + k) = '\0';

    /* reverse result */
    for (i = 0, j = k - 1; i < j; i++, j--) {
        char temp = *(res + i);
        *(res + i) = *(res + j);
        *(res + j) = temp;
    }
}

void print(char *res) {
    printf("%s", res);
}

int main() {
    char number1[51], number2[51], result[55];
    char *p1 = number1;
    char *p2 = number2;
    char *pr = result;

    getnumbers(p1, p2);
    addnumbers(p1, p2, pr);
    print(pr);

    return 0;
}
