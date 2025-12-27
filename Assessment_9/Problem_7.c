#include <stdio.h>
void disp_descending_5numbers()
{
    int a[5];
    int i, j, temp;
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 5; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(a[i] < a[j])   
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    disp_descending_5numbers();
    return 0;
}
