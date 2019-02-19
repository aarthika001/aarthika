#include<stdio.h>
#include<conio.h>
int main()
{
char n[1000],m[1000];
int i,j,a=0,x=0,d=0;
scanf("%s %s",&n,&m);
for(i=0;n[i]!='\0';i++)
{
x++;
}
for(i=0;n[i]!='\0';i++)
{
for(j=i;m[j]!='\0';j++)
{
if(n[i]==m[j])
{
a++;break;
}
}
}
d=x-a;
if(d==x)
printf("yes");
else
printf("no");
}
