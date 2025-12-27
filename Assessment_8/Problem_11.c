#include <stdio.h>
int disp_total_odd_digits(int x);
int main()
{
    int n,y;
    scanf("%d",&n);
    y = disp_total_odd_digits(n);
    printf("%d",y);
}
int disp_total_odd_digits(int a)
{
    int d,count;
    count = 0;
    while(a > 0)
    {
        d = a % 10;
        if(d % 2 == 1)
        {
            count = count + 1;
        }
        a = a / 10;
    }
    return count;
}
