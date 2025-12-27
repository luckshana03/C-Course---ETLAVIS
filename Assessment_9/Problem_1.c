#include <stdio.h>
void disp_sum_5numbers()
{
    int arr[5];
    int i, sum = 0;
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("%d", sum);
}

int main()
{
    disp_sum_5numbers();
    return 0;
}
