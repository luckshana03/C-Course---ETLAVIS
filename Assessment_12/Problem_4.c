#include <stdio.h>

int main() {
    char str[200];
    char *p = str;
    int count = 0;

    gets(str);

    if (*p != '\0')
        count = 1;

    while (*p != '\0') {
        if (*p == ' ')
            count++;
        p++;
    }

    printf("%d", count);
    return 0;
}
