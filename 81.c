#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,dif;
clrscr();
scanf("%d%d",&a,&b);
if(b>a)
dif=b-a;
else
dif=a-b;
printf("%d",dif);
getch();
}
