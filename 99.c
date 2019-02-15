#include<stdio.h>
#include<conio.h>
void main()
{
int a,m,r1,p=0;
clrscr();
scanf("%d%d%d",&a,&m,&r1);
p=a*m%r1;
printf("%d",p);
getch();
}
