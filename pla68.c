#include<stdio.h>
void main()
{
int a1[100],a2[100],l,i,j,k=0,n=0,m;
scanf("%d",&l);
for(i=0;i<l;i++)
{
scanf("%d",&a1[i]);
}
for(i=0;i<l;i++)
{
n=0;
for(j=i;j<l;j++)
{
if(a1[i]==a1[j])
{
n++;
}
}
if(n!=0)
{
a2[k]=n;
k++;
}
}
m=a2[0];
for(i=0;i<l;i++)
{
if(a2[i]>m)
{
m=a2[i];
}
}
printf("%d",m);
}
