#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,l=0,i,a[10];
clrscr();
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
l++;
p=a[i];
if(l==k)
{
printf("%d",a[i]);
}
}
}
getch();
}
