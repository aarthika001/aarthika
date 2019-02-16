#include<stdio.h>
#include<conio.h>
void main()
{
int l,j,c=0;
clrscr();
scanf("%d",&l);
for(j=1;j<=l;j++)
{
if(l%j==0)
c++;
}
if(c>2)
printf("yes");
else
printf("no");
getch();
}
