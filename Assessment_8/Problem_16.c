#include <stdio.h>
int disp_biggest_4digit_div7_9();
int main()
{
    int y;
    y = disp_biggest_4digit_div7_9();
    printf("%d", y);
}

int disp_biggest_4digit_div7_9()
{
    int n;
    n = 9999;
    while(n >= 1000)
    {
        if(n % 7 == 0 && n % 9 == 0)
            return n;
        n = n - 1;
    }
    return 0;
}
