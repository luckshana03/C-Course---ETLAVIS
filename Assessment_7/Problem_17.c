#include <stdio.h>
int is_prime(int n)
{
    if (n <= 1)
        return 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int digit_sum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
void check_prime_and_sum14(int n)
{
    int prime = is_prime(n);
    int sum = digit_sum(n);

    if (prime && sum == 14)
        printf("Prime & sum of digits is 14");
    else if (!prime && sum == 14)
        printf("Not Prime but sum of digits is 14");
    else if (prime && sum != 14)
        printf("Prime & sum of digits is not 14");
    else
        printf("Not Prime & Sum of Digits is not 14");
}
int main()
{
    int num;
    scanf("%d",&num);

    check_prime_and_sum14(num);
}
