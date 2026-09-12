#include <stdio.h>

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

void accept_array(struct student arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nEnter student %d information\n", i + 1);
        accept_student(&arr[i]);
    }
}

void print_array(struct student arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        print_student(arr[i]);
    }
}

int main()
{
    struct student arr[50];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    accept_array(arr, n);

    printf("\nStudent Information\n");
    print_array(arr, n);

    return 0;
}
