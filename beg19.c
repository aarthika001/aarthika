#inclue<stdio.h>
#include<conio.h>
void main()
{
int i,n,f=1;
clrscr();
scanf("%d",&n);
for(i=1;i<=n;i++)
{
f=f*i;
}
printf("%d",f);
getch();
}
