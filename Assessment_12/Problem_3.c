#include <stdio.h>
#include <string.h>

int main() {
    char mainStr[100], subStr[100];
    char *pos;

    scanf("%s", mainStr);
    scanf("%s", subStr);

    pos = strstr(mainStr, subStr);

    if (pos != NULL) {
        // +1 for 1-based position as per example
        printf("%d", (int)(pos - mainStr) + 1);
    } else {
        printf("-1");
    }

    return 0;
}
