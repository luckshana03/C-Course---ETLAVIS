#include <stdio.h>
int disp_total_2digit_odd(int x);
int main()
{
    int n,y;
    scanf("%d",&n);
    y = disp_total_2digit_odd(n);
    printf("%d",y);
}
int disp_total_2digit_odd(int a)
{
    int d,two,count;
    count = 0;
    while(a > 9)
    {
        d = a % 100;      
        if(d >= 10)
        {
            if(d % 2 == 1)  
            {
                count = count + 1;
            }
        }
        a = a / 10;       
    }
    return count;
}
