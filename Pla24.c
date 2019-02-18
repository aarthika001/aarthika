#include<stdio.h>
void main()
{
char a[10];
int i,l=0,c=0;
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
l++;
}
for(i=0;i<l;i++)
{
if(a[i]>='0'&&a[i]<='9')
{
c++;
}
}
if(c==l)
printf("yes");
else
printf("no");
}
