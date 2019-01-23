#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int i,l=0;
clrscr();
scanf("%s",&a);
printf("%s\n",a);
for(i=0;a[i]!='\0';i++)
{
l++;
}
printf("%d\n",l);
for(i=l-1;i>=0;i--)
{
printf("%c",a[i]);
}
getch();
}
