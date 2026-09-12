#include <stdio.h>

struct student {
    unsigned int standard : 4;
    unsigned int gender : 1;
    unsigned int age : 5;
    char name[50];
    int roll;
};

void accept_student(struct student *s)
{
    int gender;

    printf("Enter roll number: ");
    scanf("%d", &s->roll);

    printf("Enter name: ");
    scanf(" %[^\n]", s->name);

    printf("Enter standard (1-12): ");
    scanf("%u", &s->standard);

    printf("Enter gender (0 = Female, 1 = Male): ");
    scanf("%d", &gender);
    s->gender = gender;

    printf("Enter age (0-31): ");
    scanf("%u", &s->age);
}

void print_student(struct student s)
{
    printf("\nRoll     : %d\n", s.roll);
    printf("Name     : %s\n", s.name);
    printf("Standard : %u\n", s.standard);
    printf("Gender   : %u\n", s.gender);
    printf("Age      : %u\n", s.age);
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
