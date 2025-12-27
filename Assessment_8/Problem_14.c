#include <stdio.h>
int disp_two_digit_square(int n);
int main()
{
    int x,y;
    scanf("%d",&x);
    y = disp_two_digit_square(x);
    printf("%d",y);
}
int disp_two_digit_square(int n)
{
    int d,c=0;
    while(n > 9)
    {
        d = n % 100;
        if(d==16 || d==25 || d==36 || d==49 || d==64 || d==81)
            c = c + 1;
        n = n / 10;
    }
    return c;
}
