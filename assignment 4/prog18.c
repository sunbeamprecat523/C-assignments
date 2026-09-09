#include <stdio.h>

// Function prototype
void swap(int *ptr1, int *ptr2);

int main() 
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore swap: a = %d, b = %d\n", a, b);

    // Pass the memory addresses of a and b using the '&' operator
    swap(&a, &b);

    printf("After swap:  a = %d, b = %d\n", a, b);

    return 0;
}

// Function definitions using pointers
void swap(int *ptr1, int *ptr2) 
{
    int temp;

    temp = *ptr1;  // Store the value at ptr1 into temp
    *ptr1 = *ptr2; // Copy the value at ptr2 into ptr1
    *ptr2 = temp;  // Copy the value from temp into ptr2
}


