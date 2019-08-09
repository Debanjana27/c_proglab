#include<stdio.h>
int main()
{
int n,largest,smallest,i,j,a[n];
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the elements in array\n");
for (i=0;i<n;i++)
{
printf("enter the %d elements in array\n",i);
scanf("%d",&a[i]);
}

largest=smallest=a[0];
for(j=1;j<n;j++);
{

if (smallest>a[j])
smallest=a[j];
if (largest<a[j])
largest=a[j];
}
printf("the largest and smallest numbers are%d %d",largest,smallest);
return 0;
}

