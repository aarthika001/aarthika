#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int i,f=0;
clrscr();
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
{
f=1;
break;
}}
if(f==1)
printf("yes");
else 
printf("no");
getch();
}
