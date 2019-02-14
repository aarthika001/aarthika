#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,c=0,a[10];
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(k=0;k<n;k++)
{
if(a[k]>c)
c=a[k];
}
printf("%d",c);
getch();
}
