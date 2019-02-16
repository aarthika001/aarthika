#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,c=0,n,avg;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
s=s+a[i];
}
avg=s/n;
printf("%d",avg);
getch();
}
