#include <stdio.h>
void disp_2digit_even_sum6()
{
    int i, d1, d2;
    for(i = 10; i <= 99; i++)
    {
        if(i % 2 == 0)     
        {
            d1 = i / 10;   
            d2 = i % 10;   
            if(d1 + d2 == 6)
                printf("%d\n", i);
        }
    }
}
int main()
{
    disp_2digit_even_sum6();
}
