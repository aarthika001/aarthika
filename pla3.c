#include<stdio.h>
#include<conio.h>
void main()
{
int a,r,s=0;
clrscr();
while(a)
{
r=a%10;
s=s*10+r;
a=a/10;
}
printf("%d",s);
getch();
}
