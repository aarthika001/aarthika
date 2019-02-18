#include<stdio.h>
void main()
{
int i,j,n,p=0,f;
scanf("%d",&n);
for(i=2;i<=n;i++)
{
f=0;
if(n%i==0)
{
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
p=1;
break;
}
}
if(p==0)
printf("%d ",i);
}
}
}
