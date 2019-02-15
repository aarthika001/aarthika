#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,lcm;
clrscr();
scanf("%d%d",&n1,&n2);
lcm=(n1>n2)?n1:n2;
while(1)
{
if(lcm%n1==0&& lcm%n2==0)
{
printf("%d",lcm);
break;
}
++lcm;
}
getch();
}
