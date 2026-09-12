#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    char name[50];
    float marks;
};

void accept_student(struct student *s)
{
    scanf("%d", &s->roll);
    scanf(" %[^\n]", s->name);
    scanf("%f", &s->marks);
}

void print_array(struct student arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("Roll: %d, Name: %s, Marks: %.2f\n",
               arr[i].roll, arr[i].name, arr[i].marks);
}

void sort_roll(struct student arr[], int n)
{
    int i, j;
    struct student temp;

    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1 - i; j++)
            if (arr[j].roll > arr[j + 1].roll)
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

void sort_name(struct student arr[], int n)
{
    int i, j;
    struct student temp;

    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1 - i; j++)
            if (strcmp(arr[j].name, arr[j + 1].name) > 0)
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

int main()
{
    struct student arr[50];
    int n, choice, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter roll, name and marks for each student:\n");
    for (i = 0; i < n; i++)
        accept_student(&arr[i]);

    printf("\n1. Sort by Roll Number\n");
    printf("2. Sort by Name\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1)
        sort_roll(arr, n);
    else if (choice == 2)
        sort_name(arr, n);
    else
    {
        printf("Invalid choice.\n");
        return 0;
    }

    printf("\nSorted Student Information\n");
    print_array(arr, n);

    return 0;
}
