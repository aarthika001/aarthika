#include<stdio.h>
#include<conio.h>
void main()
{
int x,d=0;
clrscr();
scanf("%d",&x);
while(x)
{
x=x/10;
d++;
}
printf("%d",d);
getch();
}

