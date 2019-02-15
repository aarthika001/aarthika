#include<stdio.h>
#include<conio.h>
void main()
{
int a,q,r;
clrscr();
scanf("%d",&a);
q=a/60;
r=a%60;
printf("%d:%d",q,r);
getch();
}
