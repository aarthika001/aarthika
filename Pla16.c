#include<stdio.h>
void main()
{
int a[10],i,c,n,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
c=0;
for(j=0;j<n;j++)
{
if(a[i]==a[j])
{
c++;
}
}

if(c==1)
printf("%d ",a[i]);
}
}
