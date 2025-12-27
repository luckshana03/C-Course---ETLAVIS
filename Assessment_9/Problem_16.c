#include <stdio.h>
void add_big_arrays()
{
    int a[50], b[50], c[51];
    int i, carry = 0;
    for(i = 0; i < 50; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < 50; i++)
        scanf("%d", &b[i]);
    for(i = 0; i < 51; i++)
        c[i] = 0;
    for(i = 49; i >= 0; i--)
    {
        int sum = a[i] + b[i] + carry;
        c[i+1] = sum % 10;
        carry = sum / 10;
    }
    c[0] = carry;
    for(i = 0; i < 51; i++)
        printf("%d", c[i]);
}
int main()
{
    add_big_arrays();
    return 0;
}