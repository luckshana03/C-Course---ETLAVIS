#include <stdio.h>
void disp_LCM3()
{
    int a, b, c, lcm;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    lcm = (a > b) ? a : b;
    if(c > lcm)
        lcm = c;

    while(1)
    {
        if(lcm % a == 0 && lcm % b == 0 && lcm % c == 0)
        {
            printf("LCM = %d", lcm);
            break;
        }
        lcm++;
    }
}
int main()
{
    disp_LCM3();
    return 0;
}
