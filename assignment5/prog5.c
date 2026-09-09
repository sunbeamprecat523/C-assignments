#include <stdio.h>

void max_min(int arr[], int n)
{
    int i, max, min;

    max = arr[0];
    min = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }

        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
}

int main()
{
    int arr[5];
    int i;

    printf("Enter 5 array elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    max_min(arr, 5);

    return 0;
}
