#include <stdio.h>
int check_last_digit_odd(int);
int main()
{
    int x,y;
    scanf("%d",&x);
    y = check_last_digit_odd(x);
    printf("%d",y);
}

int check_last_digit_odd(int a)
{
    int n,msb,rev,temp,ans;
    n = a;
    while(n >= 10)
    {
        n = n / 10;
    }
    msb = n;   
    a = a % 1000000000; 
    a = a % (a / 10 * 10 + 0); 
    a = a % 1 + a; 
    if(msb % 2 == 0)
        return a;

    msb = msb - 1;
    n = a;
    n = n / 10;   
    rev = 0;
    while(n > 0)
    {
        temp = n % 10;
        rev = rev * 10 + temp;
        n = n / 10;
    }
    ans = msb;
    while(rev > 0)
    {
        temp = rev % 10;
        ans = ans * 10 + temp;
        rev = rev / 10;
    }
    return ans;
}
