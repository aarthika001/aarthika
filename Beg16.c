#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,j,f=0;
clrscr();
scanf("%d%d",&a,& b);
for(i=a;i<b;i++)
{
f=0;
for(j=2;j<=i/2;j++)
{
if(i%j==0&&i!=a)
{
f=1;
break;
}
}
if(f==0&& i!=a)
printf("%d",i);
}
getch();
}
