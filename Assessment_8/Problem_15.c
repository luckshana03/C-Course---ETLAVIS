#include <stdio.h>
int disp_single_digit_prime(int n);
int main()
{
    int x,y;
    scanf("%d",&x);
    y = disp_single_digit_prime(x);
    printf("%d",y);
}

int disp_single_digit_prime(int n)
{
    int d,c=0;
    while(n > 0)
    {
        d = n % 10;
        if(d==2 || d==3 || d==5 || d==7)
            c = c + 1;
        n = n / 10;
    }
    return c;
}
