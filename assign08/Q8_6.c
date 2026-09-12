#include <stdio.h>

struct student {
    int roll;
    char name[50];
    int standard;
    union result {
        char grade;
        float percentage;
    } result;
};

void accept_student(struct student *s)
{
    printf("Enter roll number: ");
    scanf("%d", &s->roll);

    printf("Enter name: ");
    scanf(" %[^\n]", s->name);

    printf("Enter standard: ");
    scanf("%d", &s->standard);

    if (s->standard <= 4)
    {
        printf("Enter grade (A/B/C): ");
        scanf(" %c", &s->result.grade);
    }
    else
    {
        printf("Enter percentage: ");
        scanf("%f", &s->result.percentage);
    }
}

void print_student(struct student s)
{
    printf("\nRoll     : %d\n", s.roll);
    printf("Name     : %s\n", s.name);
    printf("Standard : %d\n", s.standard);

    if (s.standard <= 4)
        printf("Grade    : %c\n", s.result.grade);
    else
        printf("Percentage: %.2f\n", s.result.percentage);
}

int main()
{
    struct student s[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("\nEnter information of student %d\n", i + 1);
        accept_student(&s[i]);
    }

    printf("\nStudent Information\n");
    for (i = 0; i < 3; i++)
        print_student(s[i]);

    return 0;
}
