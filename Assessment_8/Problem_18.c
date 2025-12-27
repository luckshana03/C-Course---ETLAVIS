#include <stdio.h>
int disp_LCM2(int);
int main()
{
    int a,b,y;
    scanf("%d",&a);
    scanf("%d",&b);
    y = disp_LCM2(a,b);
    printf("%d",y);
}

int disp_LCM2(int a, int b)
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
            return lcm;

        lcm = lcm + max;
    }
}
