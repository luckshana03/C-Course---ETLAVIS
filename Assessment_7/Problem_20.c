#include <stdio.h>
void disp_single_digit_prime_count()
{
    int count = 0;
    for(int i = 2; i <= 9; i++)
    {
        int flag = 1;
        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
            count++;
    }
    printf("%d", count);
}
int main()
{
    disp_single_digit_prime_count();
}
