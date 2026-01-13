#include <stdio.h>
int strcmp(char *src, char *dst) {
    char *ps = src;
    char *pd = dst;
    while (*ps != '\0' && *pd != '\0') {
        if (*ps != *pd) {
            return 0;   
        }
        ps++;
        pd++;
    }
    if (*ps == '\0' && *pd == '\0')
        return 1;       
    else
        return 0;       
}

int main() {
    char s1[100], s2[100];
    char *p1 = s1;
    char *p2 = s2;

    scanf("%s", p1);
    scanf("%s", p2);

    if (strcmp(p1, p2))
        printf("Success");
    else
        printf("Failure");

    return 0;
}
