#include<stdio.h>
#include<conio.h>
void main()
{
int a1,n=1,c=0;
clrscr();
scanf("%d",&a1);
while(a1)
{
n=n*2;
if(n==a1)
{
c=1;
break;
}
a1--;
}
if(c==1)
printf("yes");
else
printf("no");
getch();
}
