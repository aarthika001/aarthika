#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int j,c=0,k,len=0;
clrscr();
scanf("%s",&a);
for(j=0;a[j]!='\0';j++)
{
len++;
}
for(j=0;j<len;j++)
{
for(k=j+1;k<len;k++)
{
if(a[j]==a[k])
c=1;
}
}
if(c==0)
printf("yes");
else
printf("no");
getch();
}
