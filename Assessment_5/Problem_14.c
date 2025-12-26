#include <stdio.h>
#include <math.h>
int main()
{
    int num, middle, digit = 0;
    scanf("%d", &num);
    int temp = num;
    int temp2 = num;
    while (temp >= 10) {
        temp = temp / 10;
        digit++;
    }
    int first = temp;
    int last = temp2 % 10;
    middle = (num % (int)pow(10, digit)) / 10;
    printf("%d%d%d", last, middle, first);
    return 0;
}
