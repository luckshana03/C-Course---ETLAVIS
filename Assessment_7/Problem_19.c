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
void middle_2digits_prime(int n)
{
    int middle = (n / 10) % 100; 
    if(is_prime(middle))
        printf("Prime");
    else
        printf("Not Prime");
}
int main()
{
    int num;
    scanf("%d",&num);
    middle_2digits_prime(num);
}
