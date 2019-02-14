#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],k,n,i;
clrscr();
scanf("%d%d",&n,&k);
k--;
for(i=0;i<n;i++)
{
scnaf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(i==k)
{
printf("%d",a[i]);
}
}
getch();
}
