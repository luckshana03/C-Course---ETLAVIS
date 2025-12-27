#include <stdio.h>
void disp_biggest_5numbers()
{
    int arr[5];
    int i, max;
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for(i = 1; i < 5; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("%d", max);
}

int main()
{
    disp_biggest_5numbers();
    return 0;
}
