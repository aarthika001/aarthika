#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int i;
clrscr();
scanf("%[^\n]",&a);
for(i=0;a[i]!='\0';i++);
{
if(a[0]>=97&&a[0]<=122)
{
a[0]=a[0]-32;
}
}
printf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
if(a[i+1]>=97&&a[i+1]<=122)
{
a[i+1]=a[i+1]-32;
}
}
}
printf("%s",a);
getch();
}
