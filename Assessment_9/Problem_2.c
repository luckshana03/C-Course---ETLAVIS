#include <stdio.h>
void disp_average_5numbers()
{
    int arr[5];
    int i, sum = 0, avg;
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    avg = sum / 5;
    printf("%d", avg);
}

int main()
{
    disp_average_5numbers();
    return 0;
}
