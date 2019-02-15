#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,b,i;
clrscr();
scanf("%d",&n);
scanf("%d%d",&a,& b);
for(i=a;i<b;i++)
{
if(i==n)
printf("yes");
else 
printf("no");
}
getch();
}
