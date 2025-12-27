#include <stdio.h>
void disp_two_digit_square()
{
    int num, count = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    while(num >= 10)
    {
        int last2 = num % 100;
        if(last2 == 16 || last2 == 25 || last2 == 36 ||
           last2 == 49 || last2 == 64 || last2 == 81)
        {
            count++;
        }
        num = num / 10;
    }
    printf("%d", count);
}
int main()
{
    disp_two_digit_square();
}
