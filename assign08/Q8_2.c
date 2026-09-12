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
    printf("Roll  : %d\n", s.roll);
    printf("Name  : %s\n", s.name);
    printf("Marks : %.2f\n", s.marks);
}

int main()
{
    struct student s;

    accept_student(&s);

    printf("\nStudent Information\n");
    print_student(s);

    return 0;
}
