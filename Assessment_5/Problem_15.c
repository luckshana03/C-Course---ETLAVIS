#include <stdio.h>
#include <math.h>
int main()
{
    int num,digit = 0;
    scanf("%d", &num);
    int temp = num;
    while (temp >= 10) {
        temp = temp / 10;
        digit++;
    }
    if(temp%2 != 0){
        temp = temp-1;
    }
    num = (num % (int)pow(10,digit));
    printf("%d%d",temp,num);
    return 0;
}
