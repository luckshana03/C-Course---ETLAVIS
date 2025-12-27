#include <stdio.h>
int count_total_digits(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y = count_total_digits(x);
    printf("%d",y);
}
int count_total_digits(int a)
{
    int c;
    c = 0;

    while(a > 0)
    {
        c = c + 1;
        a = a / 10;
    }

    return c;
}
