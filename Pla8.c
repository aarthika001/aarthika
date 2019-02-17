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
if(a[0]>='a'&& a[0]<='z')
{
a[0]=a[0]-32;
}
}
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
a[i+1]=a[i+1]-32;
}}
printf("%s",a);
getch();
}
