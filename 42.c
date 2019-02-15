#include<stdio.h>
#include<conio.h>
void main()
{
char a[10],b[10];
int l=0,c=0,i,j;
clrscr();
scanf("%s%s",&a,& b);
for(i=0;a[i]!='\0';i++)
{
l++;
}
for(j=0;b[j]!='\0';j++)
{
c++;
}
if(l==c)
printf("%s",a);
else if(l>c)
printf("%s",a);
else 
printf("%s",b);
getch();
}
