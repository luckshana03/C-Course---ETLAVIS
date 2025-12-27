#include <stdio.h>
void disp_check_first_last_equal()
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
    if(n == 4)
    {
        if(a[0] == a[n-1])
            printf("Success");
        else
            printf("Failure");
    }
}
int main()
{
    disp_check_first_last_equal();
    return 0;
}
