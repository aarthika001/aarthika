#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,i,k,c,p;
clrscr();
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}
for(j=0;j<k;j++)
{
for(i=0;i<n;i++)
{
if(a[i]<c)
{
c=a[i];
p=i;
}}
a[p]=0;
}
printf("%d",c);
getch();
}
