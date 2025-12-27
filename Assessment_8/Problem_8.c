#include <stdio.h>
int disp_interchange_first_last_digit(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y = disp_interchange_first_last_digit(x);
    printf("%d",y);
}
int disp_interchange_first_last_digit(int a)
{
    int first,last,temp,n,rev,ans;
    last = a % 10;
    n = a;
    while(n >= 10)
    {
        n = n / 10;
    }
    first = n;
    a = a / 10;      
    a = a / 10;     
    rev = 0;
    while(a > 0)
    {
        temp = a % 10;
        rev = rev * 10 + temp;
        a = a / 10;
    }
    ans = last;
    while(rev > 0)
    {
        temp = rev % 10;
        ans = ans * 10 + temp;
        rev = rev / 10;
    }
    ans = ans * 10 + first;
    return ans;
}
