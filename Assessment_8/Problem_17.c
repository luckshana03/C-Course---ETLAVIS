#include <stdio.h>
int disp_count_sum14();
int main()
{
    int y;
    y = disp_count_sum14();
    printf("%d", y);
}
int disp_count_sum14()
{
    int n, temp, sum, count;
    count = 0;
    n = 0;
    while(n < 100000)
    {
        temp = n;
        sum = 0;
        while(temp > 0)
        {
            sum = sum + (temp % 10);
            temp = temp / 10;
        }
        if(sum == 14)
        {
            count = count + 1;
        }
        n = n + 1;
    }
    return count;
}
