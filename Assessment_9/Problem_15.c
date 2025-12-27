#include <stdio.h>
void disp_sum_digits_sort()
{
    int a[100], b[100];
    int n = 0, x, i, j, t;
    while(1)
    {
        scanf("%d", &x);
        if(x == 0)
            break;

        a[n] = x;
        n++;
    }
    for(i = 0; i < n; i++)
    {
        int s = 0, tnum = a[i];
        while(tnum > 0)
        {
            s = s + (tnum % 10);
            tnum = tnum / 10;
        }
        b[i] = s;
    }
    for(i = 0; i < n-1; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(b[i] > b[j])
            {
                t = b[i];
                b[i] = b[j];
                b[j] = t;
            }
        }
    }
    for(i = 0; i < n; i++)
        printf("%d ", b[i]);
}

int main()
{
    disp_sum_digits_sort();
    return 0;
}
