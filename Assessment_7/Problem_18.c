#include <stdio.h>
int is_prime(int n)
{
    if(n <= 1)
        return 0;

    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}
void check_first_2digits_prime(int n)
{
    int last_two = n % 100;

    if(is_prime(last_two))
        printf("Prime");
    else
        printf("Not Prime");
}
int main()
{
    int num;
    scanf("%d",&num);
    check_first_2digits_prime(num);
}
