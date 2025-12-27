#include <stdio.h>
int disp_2digit_even_sum6(int x);
int main()
{
    int n,y;
    scanf("%d",&n);
    y = disp_2digit_even_sum6(n);
    printf("%d",y);
}
int disp_2digit_even_sum6(int a)
{
    int i,j,count,flag;
    count = 0;
    i = 2;
    while(i <= 9)
    {
        j = 2;
        flag = 0;

        while(j < i)
        {
            if(i % j == 0)
            {
                flag = 1;
            }
            j = j + 1;
        }

        if(flag == 0)
        {
            count = count + 1;
        }

        i = i + 1;
    }
    return count;
}
