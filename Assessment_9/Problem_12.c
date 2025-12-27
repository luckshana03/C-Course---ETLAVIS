#include <stdio.h>
void disp_count_sum_till_zero()
{
    int a[100];
    int n = 0, sum = 0, x;
    while(1)
    {
        scanf("%d", &x);
        if(x == 0)
            break;

        a[n] = x;
        sum = sum + a[n];
        n++;
    }
    printf("%d\n", n); 
    printf("%d", sum); 
}

int main()
{
    disp_count_sum_till_zero();
    return 0;
}
