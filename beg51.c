#include<stdio.h>
#include<conio.h>
void main()
{
int a,r,s,r1;
clrscr();
scanf("%d",&a);
while(a)
{
r=a%10;
s=s*10+r;
a=a/10;
}
while(s)
{
r1=s%10;
s=s/10;
printf("%d ",r1);
}
getch();
}
