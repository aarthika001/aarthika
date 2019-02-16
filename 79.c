#include<stdio.h>
#include<conio.h>
void main()
{
int a1,a2,q,j,l=0;
clrscr();
scanf("%d%d",&a1,&a2);
q=a1*a2;
for(j=1;j<q;j++)
{
if(q==j*j)
l=1;
}
if(l==1)
printf("yes");
else
printf("no");
getch();
}
