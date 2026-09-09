#include <stdio.h>

int max_arr(int arr[], int n)
{
    int i, max;

    max = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

void print_arr(int arr[], int n)
{
    int i;

    printf("Array elements are:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main()
{
    int arr[5];
    int i, max;

    printf("Enter 5 array elements:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    print_arr(arr, 5);

    max = max_arr(arr, 5);

    printf("Maximum element = %d\n", max);

    return 0;
}
