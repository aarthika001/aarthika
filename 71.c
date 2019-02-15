#include<stdio.h>
#include<conio.h>
void main()
{
char a[10],b[10];
int i,j;
clrscr();
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
l++;
}
j=0;
for(i=l;i>0;i--)
{
b[j]=a[i];
j++;
}
for(j=0;b[j]!='\0';j++)
{
printf("%c",b[j]);
}
if(a==b)
printf("palidrome");
else 
printf("no");
getch();
}
