#include <stdio.h>
int disp_2digit_odd_sum_tens7(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y = disp_2digit_odd_sum_tens7(x);
    printf("%d",y);
}
int disp_2digit_odd_sum_tens7(int a)
{
    int i,s;
    i = 70;
    s = 0;

    while(i <= 79)
    {
        if(i % 2 == 1)
        {
            s = s + i;
        }
        i = i + 1;
    }
    return s;
}
