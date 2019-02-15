#include<stdio.h>
#include<conio.h>
void main()
{
int b[10],i,r,m=0;
clrscr();
scanf("%d",&r);
for(i=0;i<r;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<r;i++)
{
if(b[i]>m)
m=b[i];
}
printf("%d",m);
getch();
}
