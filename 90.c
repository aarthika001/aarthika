#include<stdio.h>
#includw<conio.h>
void main()
{
char a[10];
int i;
clrscr();
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(i>='0'&&i<='9')
printf("%c",a[i]);
}getch();
}
