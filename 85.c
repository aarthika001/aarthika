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
for(i=1;i<=l;i++)
{
if(i%2==0)
{
printf("%c",a[i];
}}
printf("\n");
for(i=1;i<=l;i++)
{
if(i%2==0)
printf("%c",a[i]);
}
getch();
}
