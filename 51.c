#include<stdio.h>
#include<conio.h>
void main()
{
int a,k,q=1,c=0,rem=0;
clrscr();
scanf("%d",&a);
m=a;
while(a)
{
a=a/10;
c++;
}
while(c)
{
q=q*10;
c--;
}
while(m)
{
rem=m;
q=q/10;
m=rem/q;
printf("%d ",m);
rem=rem%q;
m=rem;
}
getch();
}
