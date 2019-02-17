#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,p;
clrscr();
scanf("%d%d",&n1,&n2);
p=n1*n2;
if(p%2==0)
printf("even");
else
printf("odd");
getch();
}
