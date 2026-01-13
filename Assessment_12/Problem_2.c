#include <stdio.h>

void find_positions(char *str, char ch) {
    char *p = str;
    int pos = 1;
    int *ppos = &pos;
    int first = 1;

    while (*p != '\0') {
        if (*p == ch) {
            if (!first)
                printf(", ");
            printf("%d", *ppos);
            first = 0;
        }
        p++;
        (*ppos)++;
    }
}

int main() {
    char str[100], ch;
    char *pstr = str;
    char *pch = &ch;

    scanf("%s", pstr);
    scanf(" %c", pch);   

    find_positions(pstr, *pch);

    return 0;
}
