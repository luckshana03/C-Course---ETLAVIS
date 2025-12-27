#include <stdio.h>
void disp_middle_element()
{
    int a[100];
    int n = 0, x;
    while(1)
    {
        scanf("%d", &x);
        if(x == 0)
            break;
        a[n] = x;
        n++;
    }
    if(n == 0)
        return;
        
    if(n % 2 == 1)
    {
        int mid = n / 2;
        printf("%d", a[mid]);
    }
    else
    {
        int mid1 = (n/2) - 1;
        int mid2 = n/2;
        int avg = (a[mid1] + a[mid2]) / 2;
        printf("%d", avg);
    }
}

int main()
{
    disp_middle_element();
    return 0;
}
