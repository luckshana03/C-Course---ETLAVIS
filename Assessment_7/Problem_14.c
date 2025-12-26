#include <stdio.h>
void disp_interchange_first_last_digit(int n)
{
    int last = n % 10;
    int first = n;
    int mid = n;
    while(first >= 10)
        first /= 10;

    mid /= 10;
    mid /= 10;
    int pow = 1, temp = n;
    while(temp >= 10)
    {
        pow *= 10;
        temp /= 10;
    }
    int result = last * pow + mid * 10 + first;
    printf("%d", result);
}

int main()
{
    int num;
    scanf("%d", &num);
    disp_interchange_first_last_digit(num);
}
