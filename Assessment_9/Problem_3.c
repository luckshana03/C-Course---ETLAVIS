#include <stdio.h>
void disp_smallest_5numbers()
{
    int arr[5];
    int i, min;
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    for(i = 1; i < 5; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("%d", min);
}

int main()
{
    disp_smallest_5numbers();
    return 0;
}
