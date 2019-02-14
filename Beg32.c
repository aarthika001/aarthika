#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int c=0,i;
clrscr();
scanf("%[^\n]",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
c++;
}
printf("%d\n",c,c+ 1);
getch();
}
