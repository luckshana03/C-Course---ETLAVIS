#include <stdio.h>
void disp_sum_all_digits(int n)
{
    int sum = 0;
    while(n > 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }
    printf("%d", sum);
}
int main()
{
    int num;
    scanf("%d", &num);
    disp_sum_all_digits(num);
}
