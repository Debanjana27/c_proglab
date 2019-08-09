#include<stdio.h>
#include<string.h>
struct student
{
char name[30];
int roll_no;
char branch[30];
int cgpa;
};
int main()
{
struct student s;
printf("enter the name of student:\n");
scanf("%s",&s.name);
printf("enter the roll no of student:\n");
scanf("%d",&s.roll_no);
printf("enter the branch  of student:\n");
scanf("%s",&s.branch);
printf("enter the cgpa of student:\n");
scanf("%d",&s.cgpa);
printf("\n\n the student details are\n name%s \n roll no%d \n branch %s\n cgpa%d\n",s.name,s.roll_no,s.branch,s.cgpa);
return 0;
}



