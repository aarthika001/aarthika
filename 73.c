#include<stdio.h>
#include<conio.h>
void main()
{
int m,n1,n2,i,c=0;
clrscr();
scanf("%d",&m);
scanf("%d%d",&n1,&n2);
for(i=n1;i<n2;i++)
{
if(m==i)
c=1;
}
if(c==1)
printf("yes");
else
printf("no");
getch();
}
