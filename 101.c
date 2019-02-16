#include<stdio.h>
#include<conio.h>
void main()
{
char b[10];
int a,j,m,c=0;
clrscr();
scanf("%s",&b);
scanf("%d",&a);
for(j=0;b[j]!='\0';j++)
{
c++;
}
m=c-a;
for(j=m;j<c;j++)
{
printf("%c",b[j]);
}
getch();
}
