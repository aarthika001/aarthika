#include<stdio.h>
#include<conio.h>
void main()
{
char b[10];
int i,c=0;
clrscr();
scanf("%s",&b);
for(i=0;b[i]!='\0';i++)
{
if(b[i]>=48&&b[i]<=57)
{
c++;
}
}
printf("%d",c);
getch();
}
