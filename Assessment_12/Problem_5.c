#include <stdio.h>
#include <string.h>

void multiply(char *a, char *b, int *res) {
    int len1 = strlen(a);
    int len2 = strlen(b);

    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int p = (a[i] - '0') * (b[j] - '0');
            int sum = p + *(res + i + j + 1);

            *(res + i + j + 1) = sum % 10;
            *(res + i + j) += sum / 10;
        }
    }
}

void printResult(int *res, int size) {
    int i = 0;
    while (i < size && *(res + i) == 0)
        i++;

    if (i == size) {
        printf("0");
        return;
    }

    for (; i < size; i++)
        printf("%d", *(res + i));
}

int main() {
    char num1[55], num2[55];
    int result[110] = {0};

    scanf("%s", num1);
    scanf("%s", num2);

    multiply(num1, num2, result);
    printResult(result, strlen(num1) + strlen(num2));

    return 0;
}
