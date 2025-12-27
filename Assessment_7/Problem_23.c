#include <stdio.h>
void disp_single_digit_square()
{
    int num, count = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    while(num > 0)
    {
        int d = num % 10;
        if(d == 1 || d == 4 || d == 9)
            count++;
        num = num / 10;
    }
    printf("%d", count);
}
int main()
{
    disp_single_digit_square();
}
