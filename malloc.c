#include<stdio.h>
#include<stdlib.h>
int main()
{
int *p,n,i,*max,*min;
printf("enter the no of integers to be entered\n");
scanf("%d",&n);
p=(int*) malloc(n*sizeof(int));
if(p==NULL)
{
printf("out of memory\n");
exit(1);
}

printf("enter integers\n");
for(i=0;i<n;i++)
scanf("%d",p+i);


max=min=p;
for(i=0;i<n;i++)
{

if(*(p+i)>*max)

max=p+i;
if(*(p+i)<*min)

min=p+i;
}
printf("the largest number is %d\n",*max);
printf("the smallest number is %d\n",*min);
return 0;
}



































