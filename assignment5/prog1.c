#include <stdio.h>

int main()
{
    int marks[5];
    int total = 0;
    float average;
    int i;

    printf("Enter marks of 5 subjects:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

    for(i = 0; i < 5; i++)
    {
        total = total + marks[i];
    }

    average = total / 5.0;

    printf("Total = %d\n", total);
    printf("Average = %.2f\n", average);

    return 0;
}
