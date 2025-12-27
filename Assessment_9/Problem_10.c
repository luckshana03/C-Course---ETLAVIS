#include <stdio.h>
int isPrime(int n)
{
    int i;
    if(n <= 1)
        return 0;

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}
void disp_remove_prime_create_new()
{
    int a[5], b[5];
    int i, j = 0;
    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < 5; i++)
    {
        if(!isPrime(a[i]))     
        {
            b[j] = a[i];
            j++;
        }
    }
    for(i = 0; i < j; i++)
        printf("%d ", b[i]);
}
int main()
{
    disp_remove_prime_create_new();
    return 0;
}
