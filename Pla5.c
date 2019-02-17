#include <stdio.h>
void main()
{
char a[50];
int i,r=0,s=0,l=0,num;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{ 
if(a[i]=='I') 
{ 
if(a[i+1]=='V') 
{ 
r=4; i++;
} 
else if(a[i+1]=='X') 
{ 
r=9; i++;
} else 
{
r=r+1;
} 
} 
else 
{ 
if(a[i]=='V') 
{ 
s=s+5; 
} 
if(a[i]=='X') 
{ 
l=l+10; 
} }} 
num=r+s+l;
printf("%d",num); 
}
