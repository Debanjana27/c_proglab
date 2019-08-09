#include<stdio.h>
struct student
{
char name[30];
int roll;
char branch[30];
double cgpa;
};
int main()
{
struct student s;
struct student *s1;
s1=&s;
printf("enter name of student\n");
scanf("%s",&s1->name);
printf("enter roll of student\n");
scanf("%d",&s1->roll);

printf("enter branch of student\n");
scanf("%s",&s1->branch);

printf("enter cgpa of student\n");
scanf("%d",&s1->cgpa);
printf("\n\n name%s\nroll %d\n branch%s\n cgpa%d\n",s1->name,s1->roll,s1->branch,s1->cgpa);
return 0;
}
