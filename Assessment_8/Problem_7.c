#include <stdio.h>
int disp_reverse_number(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y = disp_reverse_number(x);
    printf("%d",y);
}
int disp_reverse_number(int a)
{
    int r,d;
    r = 0;

    while(a > 0)
    {
        d = a % 10;
        r = r * 10 + d;
        a = a / 10;
    }

    return r;
}
