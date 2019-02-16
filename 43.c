#include<stdio.h>
#include<conio.h>
void main()
{
char c[10];
int k;
clrscr();

scanf("%[^\n]",&c);
for(k=0;c[k]!='\0';k++)
{
if(c[k]!=' ')
printf("%c",c[k]);
}
getch();
}
