#include <stdio.h>
void disp_total_odd_digits()
{
    int num, count = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num > 0)
    {
        digit = num % 10;

        if(digit % 2 != 0)
            count++;
        num = num / 10;
    }
    printf("Total odd digits = %d", count);
}
int main()
{
    disp_total_odd_digits();
    return 0;
}
