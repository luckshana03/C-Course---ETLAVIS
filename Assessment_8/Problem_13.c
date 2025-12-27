#include <stdio.h>
int disp_single_digit_square(int n);
int main()
{
    int x,y;
    scanf("%d",&x);
    y = disp_single_digit_square(x);
    printf("%d",y);
}

int disp_single_digit_square(int n)
{
    int d,c=0;
    while(n>0)
    {
        d = n%10;

        if(d==1 || d==4 || d==9)
            c = c+1;
        n = n/10;
    }
    return c;
}
