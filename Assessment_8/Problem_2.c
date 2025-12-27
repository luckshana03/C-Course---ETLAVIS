#include <stdio.h>
int disp_rsum(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y = disp_rsum(x);
    printf("%d",y);
}
int disp_rsum(int a)
{
    int i,s;
    i = 6;
    s = 0;
    while(i >= 1)
    {
        s = s + i;
        i = i - 1;
    }
    return s;
}
