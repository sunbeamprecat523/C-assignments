#include <stdio.h>

void accept_arr(int arr[], int n)
{
    int i;

    printf("Enter %d array elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
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

    accept_arr(arr, 5);
    print_arr(arr, 5);

    return 0;
}
