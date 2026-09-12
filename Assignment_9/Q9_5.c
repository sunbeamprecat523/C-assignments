#include <stdio.h>
struct student{int roll;char name[50];float marks;};
void write_rec(FILE *fp,struct student s){fprintf(fp,"%d %s %.2f\n",s.roll,s.name,s.marks);}
void read_rec(FILE *fp){struct student s;while(fscanf(fp,"%d %49s %f",&s.roll,s.name,&s.marks)==3)printf("Roll: %d Name: %s Marks: %.2f\n",s.roll,s.name,s.marks);}
int main(){FILE *fp;struct student s;printf("Enter roll name marks: ");scanf("%d %49s %f",&s.roll,s.name,&s.marks);fp=fopen("student.txt","w");if(!fp)return 1;write_rec(fp,s);fclose(fp);fp=fopen("student.txt","r");if(!fp)return 1;read_rec(fp);fclose(fp);return 0;}
