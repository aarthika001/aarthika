#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int i;
clrscr();
scanf("%[^\n]",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='a'&&a[i]<='z')
{
a[i]=a[i]-32;
printf("%c",a[i]);
}
else 
printf("%c",a[i];
}
getch();
}
