#include<stdio.h>
#include<conio.h>
void main()
{
int f,i=1;
clrscr();
scanf("%d",&f);
for(i=1;i<=f;i++)
{
if(f%i==0)
{
printf("%d",i);
}
}
getch();
}
