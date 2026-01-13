#include <stdio.h>

void strcpy(char *src, char *dst) {
    char *ps = src;
    char *pd = dst;

    while (*ps != '\0') {
        *pd = *ps;
        ps++;
        pd++;
    }
    *pd = '\0';  

int main() {
    char src[100], dst[100];
    char *ps = src;
    char *pd = dst;
    scanf("%s", ps);
    strcpy(ps, pd);
    printf("%s", pd);
    return 0;
}
