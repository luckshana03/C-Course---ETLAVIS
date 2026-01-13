#include <stdio.h>

void strcon(char *src1, char *src2, char *dst) {
    char *p1 = src1;
    char *p2 = src2;
    char *pd = dst;

    while (*p1 != '\0') {
        *pd = *p1;
        p1++;
        pd++;
    }

    while (*p2 != '\0') {
        *pd = *p2;
        p2++;
        pd++;
    }

    *pd = '\0';  
}

int main() {
    char s1[100], s2[100], s3[200];
    char *p1 = s1;
    char *p2 = s2;
    char *p3 = s3;

    scanf("%s", p1);
    scanf("%s", p2);

    strcon(p1, p2, p3);

    printf("%s", p3);

    return 0;
}
