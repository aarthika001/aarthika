#include<stdio.h>
#include<conio.h>
void main()
{
int a,r,c=0,d=0;
clrscr();
scanf("%d",&a);
while(a)
{
r=a%10;
a=a/10;
c++;
if(r==1||r==0)
{
d++;
}}
if(c==d)
printf("yes");

else
printf("no");
getch();
}
