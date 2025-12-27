#include <stdio.h>
int disp_LCM3(int);
int main()
{
    int a,b,c,y;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    y = disp_LCM3(a,b,c);
    printf("%d",y);
}

int disp_LCM3(int a, int b, int c)
{
    int max, lcm;
    if(a > b)
        max = a;
    else
        max = b;

    lcm = max;
    while(1)
    {
        if(lcm % a == 0 && lcm % b == 0)
            break;
        lcm = lcm + max;
    }
    if(lcm > c)
        max = lcm;
    else
        max = c;

    while(1)
    {
        if(max % lcm == 0 && max % c == 0)
            return max;

        max = max + lcm;
    }
}
