#include <stdio.h>
int disp_2digit_ones5(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y = disp_2digit_ones5(x);
    printf("%d",y);
}

int disp_2digit_ones5(int a)
{
    int i,s;
    i = 10;
    s = 0;
    while(i <= 99)
    {
        if(i % 10 == 5)
        {
            s = s + i;
        }
        i = i + 1;
    }
    return s;
}
