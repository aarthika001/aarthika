#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,f1=0,f2=1,f3;
clrscr();
scanf("%d",&n);
for(i=1;i<=n;i++)
{
f3=f1+f2;
f1=f2;
f2=f3;
}
printf("%d",f3);
getch();
}
