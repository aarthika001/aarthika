#include<stdio.h>
#include<conio.h>
void main()
{
int q[10],l,i,max=0,min;
clrscr();
scanf("%d",&l);
for(i=0;i<l;i++)
{
scanf("%d",&q[i]);
}
for(i=0;i<l;i++)
{
if(q[i]>max)
{
max=q[i];
}
}
min=q[0];
for(i=0;i<l;i++)
{
if(q[i]<min)
{
min=q[i];
}
}
printf("%d %d",min,max);
getch();
}
