#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 55

void normalize(char *s) {
    while (*s == '0' && *(s + 1))
        memmove(s, s + 1, strlen(s));
}

int cmp(char *a, char *b) {
    normalize(a); normalize(b);
    int la = strlen(a), lb = strlen(b);
    if (la != lb) return la > lb ? 1 : -1;
    return strcmp(a, b);
}

void add(char *a, char *b, char *res) {
    int i = strlen(a) - 1, j = strlen(b) - 1, k = 0, carry = 0;
    char temp[110];

    while (i >= 0 || j >= 0 || carry) {
        int s = carry;
        if (i >= 0) s += *(a + i--) - '0';
        if (j >= 0) s += *(b + j--) - '0';
        temp[k++] = (s % 10) + '0';
        carry = s / 10;
    }
    temp[k] = '\0';

    for (i = 0; i < k; i++)
        *(res + i) = temp[k - i - 1];
    *(res + k) = '\0';
}


void sub(char *a, char *b, char *res) {
    int i = strlen(a) - 1, j = strlen(b) - 1, k = 0, borrow = 0;
    char temp[110];

    while (i >= 0) {
        int d = (*(a + i) - '0') - borrow;
        if (j >= 0) d -= (*(b + j--) - '0');
        if (d < 0) { d += 10; borrow = 1; }
        else borrow = 0;
        temp[k++] = d + '0';
        i--;
    }
    temp[k] = '\0';

    while (k > 1 && temp[k - 1] == '0') k--;
    for (i = 0; i < k; i++)
        *(res + i) = temp[k - i - 1];
    *(res + k) = '\0';
}


void mul(char *a, char *b, char *res) {
    int la = strlen(a), lb = strlen(b);
    int arr[110] = {0};

    for (int i = la - 1; i >= 0; i--) {
        for (int j = lb - 1; j >= 0; j--) {
            int p = (*(a + i) - '0') * (*(b + j) - '0');
            int sum = p + arr[i + j + 1];
            arr[i + j + 1] = sum % 10;
            arr[i + j] += sum / 10;
        }
    }

    int i = 0, k = 0;
    while (i < la + lb && arr[i] == 0) i++;
    if (i == la + lb) {
        strcpy(res, "0");
        return;
    }
    while (i < la + lb)
        *(res + k++) = arr[i++] + '0';
    *(res + k) = '\0';
}


void divi(char *a, char *b, char *q, char *r) {
    char temp[110] = "0";
    int qi = 0;

    for (int i = 0; i < strlen(a); i++) {
        int len = strlen(temp);
        temp[len] = *(a + i);
        temp[len + 1] = '\0';
        normalize(temp);

        int count = 0;
        while (cmp(temp, b) >= 0) {
            sub(temp, b, temp);
            count++;
        }
        *(q + qi++) = count + '0';
    }
    *(q + qi) = '\0';
    normalize(q);
    strcpy(r, temp);
}

int main() {
    char input[200], a[MAX], b[MAX], res[120], rem[120];

    while (1) {
        printf("Calc> ");
        gets(input);

        if (strcmp(input, "Exit") == 0)
            break;

        char op;
        sscanf(input, "%[^+-*/]%c%s", a, &op, b);

        normalize(a);
        normalize(b);

        if (op == '+') {
            add(a, b, res);
            printf("%s\n", res);
        } else if (op == '-') {
            if (cmp(a, b) < 0) {
                sub(b, a, res);
                printf("-%s\n", res);
            } else {
                sub(a, b, res);
                printf("%s\n", res);
            }
        } else if (op == '*') {
            mul(a, b, res);
            printf("%s\n", res);
        } else if (op == '/') {
            if (strcmp(b, "0") == 0) {
                printf("Invalid\n");
            } else {
                divi(a, b, res, rem);
                printf("Quotient: %s\nRemainder: %s\n", res, rem);
            }
        }
    }
    return 0;
}
