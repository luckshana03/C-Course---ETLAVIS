#include <stdio.h>
void disp_total_2digit_odd()
{
    int num;
    int count = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    while(num > 9)          
    {
        int last2 = num % 100;  
        if(last2 % 2 == 1)     
            count++;
        num = num / 10;        
    }
    printf("Total 2-digit odd numbers = %d\n", count);
}
int main()
{
    disp_total_2digit_odd();
}
