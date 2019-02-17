#include<stdio.h>
void main()
{
int x,y,i,j,f=0,c=0;
scanf("%d%d",&x,&y);
for(j=x;j<=y;j++)
{
f=0;
for(i=2;i<=j/2;i++)
{
if(j%i==0)
{
f=1;
break;
}}
if(f==0)
{
c++;
}}
printf("%d",c);
}
