#include <stdio.h>
void adjust_carry(int a[], int n)
{
    int i;
    for(i = n-1; i > 0; i--)
    {
        if(a[i] >= 10)
        {
            int carry = a[i] / 10;
            a[i] = a[i] % 10;
            a[i-1] += carry;
        }
    }
    if(a[0] >= 10)
    {
        int carry = a[0] / 10;
        a[0] = a[0] % 10;
        printf("%d ", carry); 
    }

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
}

int main()
{
    int n, i, a[50];
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    adjust_carry(a, n);
    return 0;
}
