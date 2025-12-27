#include <stdio.h>
int disp_count_HCF2(int a, int b)
{
    int i, hcf;
    if(a < b)
        hcf = a;
    else
        hcf = b;

    i = hcf;
    while(i >= 1)
    {
        if(a % i == 0 && b % i == 0)
        {
            hcf = i;
            break;
        }
        i--;
    }
    return hcf;
}
int main()
{
    int x, y, result;
    scanf("%d", &x);
    scanf("%d", &y);
    result = disp_count_HCF2(x, y);
    printf("%d", result);
    return 0;
}
