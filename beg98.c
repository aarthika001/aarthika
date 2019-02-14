#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[10],i;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(i<i+1)
{
continue;
}else
{
printf("%d",i);
}
}
getch();
}
