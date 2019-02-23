#include<stdio.h>
void main()
{
char s[100],p;
int i,j,c=0,m=1,l=0;
scanf("%[^\n]",&s);
for(i=0;s[i]!='\0';i++)
{
l++;
}
for(i=0;i<l;i++)
{
for(j=i+1;j<l;j++)
{
if(s[i]==s[j])
{
c++;
}
if(c>m)
{
m=c;
p=s[i];
}}}
printf("%c",p);
}
