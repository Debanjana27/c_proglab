#include<stdio.h>
int main()
{
int n,arr[n],i,*max,*min;

printf ("enter the number of elements to be entered");
scanf("%d",&n);
printf ("enter the elements to be entered");
for (i=0;i<n;i++)
{
printf("the %d element is:\n",i);
scanf("%d",&arr[i]);
}
max=min=arr;
for(i=0;i<n;i++)
{
if(*(arr+i)>*max)
max=(arr+i);

if(*(arr+i)<*min)
min=(arr+i);
}
printf("the largest element is %d\n",*max);
printf("the smallest element is %d\n",*min);
return 0;
}

