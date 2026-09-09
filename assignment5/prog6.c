#include <stdio.h>

int remove_duplicates(int arr[], int n)
{
    int i, j, k;

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                // Shift elements to the left
                for(k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                n--;
                j--;
            }
        }
    }

    return n;
}

int main()
{
    int arr[10];
    int n, i;

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    n = remove_duplicates(arr, n);

    printf("Array after removing duplicates:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nNumber of unique elements = %d\n", n);

    return 0;
}
