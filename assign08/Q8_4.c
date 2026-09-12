#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    char name[50];
    float marks;
};

void accept_student(struct student *s)
{
    printf("Enter roll number: ");
    scanf("%d", &s->roll);
    printf("Enter name: ");
    scanf(" %[^\n]", s->name);
    printf("Enter marks: ");
    scanf("%f", &s->marks);
}

void print_student(struct student s)
{
    printf("Roll: %d, Name: %s, Marks: %.2f\n",
           s.roll, s.name, s.marks);
}

void search_roll(struct student arr[], int n, int roll)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i].roll == roll)
        {
            print_student(arr[i]);
            return;
        }
    }
    printf("Student not found.\n");
}

void search_name(struct student arr[], int n, char name[])
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (strcmp(arr[i].name, name) == 0)
        {
            print_student(arr[i]);
            return;
        }
    }
    printf("Student not found.\n");
}

int main()
{
    struct student arr[50];
    int n, choice, roll;
    char name[50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        accept_student(&arr[i]);

    printf("\n1. Search by Roll Number\n");
    printf("2. Search by Name\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter roll number: ");
        scanf("%d", &roll);
        search_roll(arr, n, roll);
    }
    else if (choice == 2)
    {
        printf("Enter name: ");
        scanf(" %[^\n]", name);
        search_name(arr, n, name);
    }
    else
        printf("Invalid choice.\n");

    return 0;
}
