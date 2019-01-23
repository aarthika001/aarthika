#include<stdio.h>
#include<conio.h>
void main()
{
int a,r,rem=0;
clrscr();
scanf("%d",&a);
while(a)
{
r=a%10;
rem=rem*10+r;
a=a/10;
}
printf("%d",rem);
getch();
}
