#include <stdio.h>
void disp_single_digit_prime()
{
    int num, count = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    while(num > 0)
    {
        int d = num % 10;
        if(d == 2 || d == 3 || d == 5 || d == 7)
        {
            count++;
        }
        num = num / 10;
    }
    printf("%d", count);
}
int main()
{
    disp_single_digit_prime();
}
