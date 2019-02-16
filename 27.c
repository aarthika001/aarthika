#include<stdio.h>
#include<conio.h>
void main()
{
char c[10];
int i,len=0,n=0;
clrscr();
scanf("%s",&c);
for(i=0;c[i]!='\0';i++)
{
n++;
}
for(i=0;a[i]!='\0';i++)
{
if(a[i]>=48&&a[i]<=57)
{
len++;
}
}
if(n==len)
printf("yes");
else
printf("no");
getch();
}
