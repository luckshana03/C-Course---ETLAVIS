#include <stdio.h>
void check_last_digit_odd(int n)
{
    int temp=n, pow=1;
    while(temp>=10)
    {
        temp/=10;
        pow*=10;
    }
    int msb=temp;
    int rem=n%pow;
    if(msb%2!=0)
        msb=msb-1;

    int result=msb*pow+rem;
    printf("%d",result);
}

int main()
{
    int num;
    scanf("%d",&num);
    check_last_digit_odd(num);
}
