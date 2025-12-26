#include <stdio.h>
void check_prime(int n)
{
    int i, flag = 1;
    if(n <= 1)
    {
        printf("Not Prime");
        return;
    }
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
        printf("Prime");
    else
        printf("Not Prime");
}
int main()
{
    int num;
    scanf("%d",&num);
    check_prime(num);
}
