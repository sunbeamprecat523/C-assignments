#include <stdio.h>

void reverse_arr(int arr[], int n)
{
    int i, temp;

    for(i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int i;

    printf("Original array:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    reverse_arr(arr, 5);

    printf("\nReversed array:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
