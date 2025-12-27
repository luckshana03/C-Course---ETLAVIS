#include <stdio.h>
void disp_LCM2()
{
    int a, b, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    lcm = (a > b) ? a : b;
    while(1)
    {
        if(lcm % a == 0 && lcm % b == 0)
        {
            printf("LCM = %d", lcm);
            break;
        }
        lcm++;
    }
}
int main()
{
    disp_LCM2();
    return 0;
}
