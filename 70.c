#include<stdio.h>
#include<conio.h>
void main()
{
int a,p=1,t1;
clrscr();
scanf("%d",&a);
t1=a;
while(a)
{
p=p*2;
if(t1<p)
{
printf("%d",p);
break;
}
a--;
}
getch();
}
