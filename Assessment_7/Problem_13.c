#include <stdio.h>
void disp_reverse_number(int n)
{
    int rev = 0;
    while(n > 0)
    {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }
    printf("%d", rev);
}

int main()
{
    int num;
    scanf("%d", &num);
    disp_reverse_number(num);
}
