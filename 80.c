#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,l=0,s=0,b[10],r,r1;
clrscr();
scanf("%d",&a);
while(a)
{
r=a%10;a=a\10;s=s*10+r;
}
i=0;
while(s)
{
r1=s%10;s=s\10;b[i]=r1;
i++;
l++;
}
for(i=0;i<d;i++)
{
printf("%d",b[j]);
}
for(i=0;i<l;i++)
{
if(i%2!=0)
printf("%d",b[i]);
}
getch();
}
