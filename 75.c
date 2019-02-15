#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int i,l=0;
clrscr();
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
l++;
}
for(i=0;a[i]!='\0';i++)
{
if(i==l\2)
{
printf("*");
}
else 
printf("%c",a[i]);
}
getch();
}
