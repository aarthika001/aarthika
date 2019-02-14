#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int i,c=0;
clrscr();
scanf("%[^\n]",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
continue;
else 
c++;
}
printf("%d",c);
getch();
}

