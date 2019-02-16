#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,r;
char ch;
clrscr();
scanf("%d %c %d",&n,&ch,&m);
if(ch=='/')
r=n/m;
else
r=n%m;
printf("%d",r);
getch();
}
