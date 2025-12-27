#include <stdio.h>
int disp_sum_all_digits(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y = disp_sum_all_digits(x);
    printf("%d",y);
}

int disp_sum_all_digits(int a)
{
    int s,d;
    s = 0;

    while(a > 0)
    {
        d = a % 10;
        s = s + d;
        a = a / 10;
    }

    return s;
}
