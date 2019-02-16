#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,p=1,i;
clrscr();
scanf("%d%d",&a,&b);
for(i=0;i<b;i++)
{
p=p*a;
}
printf("%d",p);
getch();
}
