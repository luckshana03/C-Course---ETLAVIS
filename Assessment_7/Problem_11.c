#include <stdio.h>
void count_total_digits(int n)
{
    int count = 0;
    while(n > 0)
    {
        count++;
        n = n / 10;
    }
    printf("%d", count);
}
int main()
{
    int num;
    scanf("%d", &num);
    count_total_digits(num);
}
