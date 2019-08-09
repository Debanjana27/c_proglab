#include<stdio.h>
#include<stdlib.h>
int *add(int*A,int m,int*B,int n)
{int*C;
if(m>n)
{
 C=(int*)malloc((m+1)*sizeof(int));
 int i;
 for(i=0;i<m;i++)
 {
C[i]=A[i];
}
for(i=0;i<n;i++)
{C[i]=C[i]+B[i];
}}
else
{
int i;
 for(i=0;i<n;i++)
{C[i]=B[i];
}
 C=(int*)malloc((n+1)*sizeof(int));
 
for(i=0;i<n;i++)
{C[i]=C[i]+A[i];
}
}
return C;
}

int main()
{
int *A,m,*B,n,co,e,i,j,*C,term;
printf("Enter the degree of A");
scanf("%d",&m);
A=(int*)malloc((m+1)*sizeof(int));
for(i=0;i<=m;i++)
A[i]=0;
printf("Enter the non zero terms");
scanf("%d",&term);
for(i=0;i<term;i++)
{
printf("Enter coeff and exponent");
scanf("%d %d",&co,&e);
A[e]=co;
}
printf("Enter the degree of B");
scanf("%d",&n);
B=(int*)malloc((m+1)*sizeof(int));
for(i=0;i<=n;i++)
B[i]=0;
printf("Enter the non zero terms");
scanf("%d",&term);
for(i=0;i<term;i++)
{
printf("Enter coeff and exponent");
scanf("%d %d",&co,&e);
B[e]=co;
}
C= add(A,m,B,n);
if(m>n){
int i;
for(i=0;i<=m;i++)
{
printf("%d x^%d+",C[i],i);
}}
else {
int j;
for(j=0;j<=n;j++)
{
printf("%d x^%d+",C[j],j);
}}
return 0;
}



