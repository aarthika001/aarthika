#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,insert;
clrscr();
scanf("%d%d",&a,&b);
while(b)
{
b=b\10;
l++;
}
while(l)
{
p=p*10;
l--;
}
c=a*p;
insert=c+b;
printf("%d",insert);
getch();
}
