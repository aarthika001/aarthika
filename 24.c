#include<stdio.h>
#include<studio.h>
void main()
{
int c[10],i,j,m,t;
scanf("%d",&m);
for(i=0;i<m;i++)
{
scanf("%d",&c[i]);
}
for(i=0;i<m;i++)
{
for(j=i+1;j<m;j++)
{
if(c[i]>c[j])
{
t=c[i];
c[i]=c[j];
c[j]=t;
}
}
}
for(i=0;i<m;i++)
{
printf("%d ",c[i]);
}
getch();
}
