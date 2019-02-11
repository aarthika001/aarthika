#include<stdio.h>
#include<conio.h>
void main()
{
int a,l=0,r;
clrscr();
scanf("%d",&a);
while(a)
{
a=a/10;r=a%10;
l++;
}
printf("%d",l);
getch();
}
