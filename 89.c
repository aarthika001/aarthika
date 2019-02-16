#include<stdio.h>
#include<conio.h>
void main()
{
char b[10];
int j,c=0;
clrscr();
scanf("%s",&b);
for(j=0;b[j]!='\0';j++)
{
c++;
}
for(j=c-1;j>=0;j--)
{
printf("%c",b[j]);
}
getch();
}
