#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,t,s=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
t=a[0];
a[n-1]=a[0];
a[n-1]=t;
for(i=0;i<n;i++)
{
if(a[i]<a[i+1])
{
s=s+a[i+1];
}
}
printf("%d",s);
}
