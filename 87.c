#include<stdio.h>
#include<conio.h>
void main()
{
int b,a,t,gcd;
clrscr();
scanf("%d%d",&a,& b);
while(b)
{
t=b;
b=a%b;a=t;
}printf("%d",a);
getch();
}
