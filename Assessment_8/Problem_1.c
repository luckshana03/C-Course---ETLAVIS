#include <stdio.h>
int disp_sum(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y = disp_sum(x);
    printf("%d",y);
}
int disp_sum(int a)
{
    int i,s;
    i = 1;
    s = 0;
    while(i <= 5)
    {
        s = s + i;
        i = i + 1;
    }
    return s;
}
